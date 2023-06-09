#include "lists.h"

/**
 * sum_dlistint - sum of list elems
 * @head: pointer to head of list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
