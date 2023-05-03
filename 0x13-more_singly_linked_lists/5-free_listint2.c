#include "lists.h"

/**
 * free_listint2 - free list
 *
 *
 * @head: pointer to list
 */

void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		h = *head;
		*head = (*head)->next;
		free(h);
	}
}
