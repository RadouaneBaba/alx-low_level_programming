#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given position
 * @head: pointer to list
 * @idx: index of the new node
 * @n: num of the node
 * Return: adress of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t = malloc(sizeof(listint_t));
	listint_t *h;

	h = get_nodeint_at_index(*head, idx - 1);

	if (t == NULL || (h == NULL && idx != 0))
		return (NULL);
	t->n = n;
	t->next = h->next;
	
	h = t;

	return (t);
}
