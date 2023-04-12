#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/
char *argstostr(int ac, char **av)
{
	char *strDup;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;

/* count the number of chars in each string */

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

/* allocate memory for total number of chars and
 * new line for each word
 */
	strDup = malloc(sizeof(char) * size);
	if (strDup == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strDup[k++] = av[i][j];
		}
		strDup[k++] = '\n';
	}
	strDup[k] = '\0';
	return (strDup);
}

