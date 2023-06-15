#include "lists.h"

/**
 * free_dlistint - free list
 * @head: pointer to list
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
