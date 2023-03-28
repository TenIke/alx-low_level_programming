#include <stdio.h>
#include "main.h"
/**
*print_array - update value.
*@a: value to be evaluate.
*@n: value to be evaluate.
*Return: nothing.
*/
void print_array(int *a, int *n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
