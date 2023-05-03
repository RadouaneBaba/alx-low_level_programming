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
	unsigned int i = 0;
	listint_t *h = *head;

	if (t == NULL)
		return (NULL);
	t->n = n;

	if (idx == 0)
	{
		t->next = *head;
		*head = t;
		return (t);
	}
	while (h != NULL)
	{
		if (i == idx - 1)
		{
			t->next = h->next;
			h->next = t;
			return (t);
		}
		h = h->next;
		i++;
	}
	return (NULL);
}
