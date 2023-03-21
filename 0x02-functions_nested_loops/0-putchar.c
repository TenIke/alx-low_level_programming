#include <stdio.h>
/**
 * Main - Start entries
 *
 * Description: write a program using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char p[6] = "TenIke";

	for (i = 0; i < 6; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
