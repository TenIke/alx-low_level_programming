#include "lists.h"

/**
*get_nodeint_at_index - return the nth node of a linked list
*@head: pointer to the head of the list
*@index: index of the node required
*
*Return: the address of the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	a = 0;
	while (a < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		a++;
	}
	return (head);
}
