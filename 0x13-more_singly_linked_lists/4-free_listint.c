#include "lists.h"

/**
 * free_listint - free the linked list
 *
 * @head: the list
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
