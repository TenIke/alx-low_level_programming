#include <stdio.h>
#include <ctype.h>
/**
* Main - Entry point
*
* Description:The for loop is used to iterate through the alphabet
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
