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
	const list_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
if (cursor->str != NULL)
printf("[%d] %s\n", cursor->len, cursor->str);
else
printf("[0] (nil)\n");
count += 1;
cursor = cursor->next;
}

return (count);
}
