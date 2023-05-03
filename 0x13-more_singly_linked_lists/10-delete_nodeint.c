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

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = *head->next;
		free(h);
		return (1);
	}

	while (*head != NULL)
	{
		if (i == index - 1)
		{
			h = *head->next;
			(*head)->next = (*head)->next->next;
			free(h);
			return (1);
		}
		*head = (*head)->next;
		i++;
	}

	return (-1);
}
