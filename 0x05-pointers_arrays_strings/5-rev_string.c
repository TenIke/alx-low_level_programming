#include <stdio.h>
#include "main.h"
/**
*rev_string - update value.
*@s: value to be evaluate.
*Return: not.
*/
void rev_string(char *s)
{
	int a = 0, length;

	length = _strlen(s) - 1;

	while = (length > a)
	{
		swap_char(s + length, s + a);
		a++;
		length--;
	}
}
