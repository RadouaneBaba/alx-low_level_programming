#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: index of node
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *d = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = *head->next;
		free(d);
		return (1);
	}
	while (index > i)
	{
		if (d == NULL)
			return (-1);
		d = d->next;
		i++;
	}
	if (d == NULL)
		return (-1);
	(d->prev)->next = d->next;
	(d->next)->prev = d->prev;

	free(d);
	return (1);

}
