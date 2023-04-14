#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - call
 * @nmemb: n
 * @size: size
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (a = 0; a < (nmemb * size); a++)
			block[a] = 0;
		return (block);
	}
	else
		return (NULL);
}
