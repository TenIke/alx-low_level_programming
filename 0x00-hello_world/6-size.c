#include <stdio.h>

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a cha: %i byte(s)\n", sizeof(acharacter));
	printf("Size of a int: %i byte(s)\n", sizeof(ainteger));
	printf("Size of a long int: %i byte(s)\n" sizeof(along));
	printf("Size of a long long int: %i byte(s)\n" sizeof(alonglong));
	printf("Size of a float: %i byte(s)\n" sizeof(afloat));
	return (0);
}
