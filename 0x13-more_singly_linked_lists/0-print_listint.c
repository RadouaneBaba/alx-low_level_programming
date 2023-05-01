#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of listint
 *
 * @h: pointer to a linked list
 *
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h->next != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (n);
}
