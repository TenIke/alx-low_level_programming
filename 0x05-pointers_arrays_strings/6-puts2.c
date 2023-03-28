#include <stdio.h>
#include "main.h"
/**
*puts2 - print pair values.
*@str: value to be evaluate.
*Return: nothing.
*/
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
