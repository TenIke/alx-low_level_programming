#include <stdio.h>
#include "main.h"
/**
*main - Start entries
*
*Description: write a program using putchar
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char p[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
