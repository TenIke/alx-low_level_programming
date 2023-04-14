#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/
int *array_range(int min, int max)
{
	int *block;
	int a, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	block = malloc(size * sizeof(*block));
	if (block == NULL)
		return (NULL);
	for (a = 0; a < size && min <= max; a++, min++)
		*(block + a) = min;
	return (block);
}
