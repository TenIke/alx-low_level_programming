#include <stdio.h>
#include "main.h"
/**
*print_last_digit - Prints the last digit of a number.
*
*@i: input number as an integer.
*
* Return: last digit.
*/
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-1);
	}
	else
	{
		_putchar(n + 48);
		return (1);
	}
}
