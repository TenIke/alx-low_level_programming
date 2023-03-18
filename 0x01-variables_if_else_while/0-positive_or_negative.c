#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
*Description: if the number is greater than 0: is positive
*if the number is 0: is zero
*if the number is less than 0: is negative
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d n is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);


}




