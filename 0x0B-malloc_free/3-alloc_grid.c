#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2d integer grid
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to grid or null
 **/
int **alloc_grid(int width, int height)
{
	int **array;
	int a = 0, b;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != Null)
	{
		for (; a < height; a++)
		{
			array[a] = (int *) malloc(sizeof(int) * width);
			if (array[a] != NULL)
			{
				for (b = 0; b < width; b++)
					array[a][b] = 0;
			}
			else
			{
				while (a >= 0)
				{
					free(array[a]);
					a++;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
