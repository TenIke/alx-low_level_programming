#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int row, column, j;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column + size - row > 1; column++)
			_putchar(' ');
		for (j = row + column; j >= 1; j--)
			_putchar('#');
		_putchar('\n');
	}
}
