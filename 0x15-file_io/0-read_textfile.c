#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Reads text file and print to the POSIX stdout.
 * @filename: file.
 * @letters: Number of letters it should read and print.
 * Return: Actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || r != w)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}
