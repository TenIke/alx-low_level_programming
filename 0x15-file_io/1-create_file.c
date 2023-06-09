#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - Creates a file.
 * standard output.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, lenght;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		lenght = 0;
		while (*(text_content + lenght) != '\0')
			lenght++;
		w = write(fd, text_content, lenght);
		if (w == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
