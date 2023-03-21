#include <stdio.h>
/**
* Main - Start entry
*
* Description: writing alphabets in lower case.
*
* Return: Always (0)
*/
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
