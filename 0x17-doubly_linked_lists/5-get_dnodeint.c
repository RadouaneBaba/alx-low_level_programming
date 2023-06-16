#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to the head of list
 * @index: index int
 * Return: the node at index or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
