#include "lists.h"

/**
 * get_nodeint_at_index - find nth node of a list
 *
 * @head: list
 * @index: int
 *
 * Return: node on the index or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
