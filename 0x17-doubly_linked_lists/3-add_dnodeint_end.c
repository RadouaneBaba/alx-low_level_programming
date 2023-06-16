#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: pointer to the begining of list
 * @n: number of node
 * Return: pointer to head of list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *l = malloc(sizeof(dlistint_t));
	dlistint_t *h = *head;

	if (l == NULL)
		return (NULL);
	l->n = n;
	l->next = NULL;

	if (*head == NULL)
	{
		l->prev = *head;
		*head = l;
		return (*head);
	}

	while (h->next != NULL)
		h = h->next;

	l->prev = h;
	h->next = l;
	return (l);
}
