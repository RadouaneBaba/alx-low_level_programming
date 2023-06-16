#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node in the list
 * @h: head of list
 * @idx: index where to insert
 * @n: num of node
 * Return: adress of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *l = malloc(sizeof(dlistint_t));
	unsigned int i = 0;
	dlistint_t *t = *h;

	if (t == NULL)
		return (NULL);
	if (*h == NULL)
		return (add_dnodeint(h, n));
	l->n = n;
	while (idx > i)
	{
		if (t == NULL)
			return (NULL);
		t = t->next;
		i++;
	}
	l->next = t;
	l->prev = t->prev;
	(t->prev)->next = l;
	t->prev = l;
	return (l);
}
