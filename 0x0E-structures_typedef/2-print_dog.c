#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to an element of type dog
 * Return: nothing
 **/
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %f\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
