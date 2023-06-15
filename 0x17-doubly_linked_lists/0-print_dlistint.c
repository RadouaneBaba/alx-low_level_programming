#include "lists.h"

/**
 * print_dlistint - print list
 * @h: list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
