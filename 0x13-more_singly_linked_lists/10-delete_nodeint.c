#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 *
 * @head: adress of a struct
 * @index: index
 *
 * Return: 1 on success -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h = *head;
	listint_t *t;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}

	while (h != NULL)
	{
		if (i == index - 1)
		{
			t = h->next;
			h->next = h->next->next;
			free(t);
			return (1);
		}
		h = h->next;
		i++;
	}

	return (-1);
}
