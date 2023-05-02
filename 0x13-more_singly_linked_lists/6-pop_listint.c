#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/
int pop_listint(listint_t **head)
{
	int a;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		a = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		a = 0;
	return (a);
}
