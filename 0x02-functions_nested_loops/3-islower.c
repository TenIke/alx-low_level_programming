#include "main.h"
#include <stdio.h>
/**
*_islower - function name
*
*Description: checks if it is caselower
*
*Characters in ASCII code
*
*Return: 1 for lowercase. 0 for the rest
*
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
