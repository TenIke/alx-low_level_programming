#include <stdio.h>
#include "main.h"
/**
* print_rev - print a string, in reverse, followed by a new line
* @s: value taken from main
* Return: (0)
*/
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
		for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
