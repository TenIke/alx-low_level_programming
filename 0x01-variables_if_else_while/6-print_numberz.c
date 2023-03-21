#include <stdio.h>

/**
*Main - Start entry
*
*Description:
*Declare a variable called digit of type int.
*Initialize the variable digit to the character ‘0’.
*While the variable digit is less than or equal to the character ‘10’.
*Print a newline character.
*
*Return: Always 0 (Success)
*/

int main(void)

{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');
	putchar('\n');
	return (0);
}
