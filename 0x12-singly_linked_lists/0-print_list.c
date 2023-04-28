#include <stdio.h>
#include "list.h"
#include <stdlib.h>

/**
 * print_list - print all element of a list_t list
 *
 * @h: Pointer to the list
 *
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("[%d] &s\n", h->len, h->str);
		h = h->next;
	}
	return (a);
}
