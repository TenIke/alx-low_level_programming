#include <stdio.h>
#include "main.h"
/**
*puts_half - update value.
*@str: value to be evaluate.
*Return: nothing.
*/
void puts_half(char *str)
{
	int len = _strlen(str);

	if (len % 2 == 0)
		len = len / 2;

	else
		len = (len + 1) / 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
