#include <stdio.h>
#include "main.h"
/**
*main - Start entries
*
*Description: print alphabets in lower case
*
*@c to increment the alphabets
*
*Return: Always 0
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
