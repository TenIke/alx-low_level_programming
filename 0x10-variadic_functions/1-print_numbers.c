#include "variadic_functions.h"
#include <stdio.h>
/**
 *  print_numbers - prints out numbers given
 * @separator: string to be seperated between numbers
 * @n: number of arguements
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int a;

	ca_start(numbers, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (a < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
