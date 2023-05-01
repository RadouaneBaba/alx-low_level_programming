#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 *
 * @head: the list
 * @n: the element
 *
 * Return: the new list or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *h = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (h->next != NULL)
		h = h->next;
	h->next = new;

	return (head);
}
