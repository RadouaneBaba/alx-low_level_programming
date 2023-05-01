#include "lists.h"

/**
 * pop_listint - delete the first node
 *
 * @head: the list
 * Return: head nodes data or 0
 */

int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
		return (0);

	n = *head->n;

	*head = *head->next;

	return (n);
}
