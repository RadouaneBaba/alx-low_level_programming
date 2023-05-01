#include "lists.h"

/**
 * listint_len - num of elements in a linked list
 *
 * @h: linked list
 *
 * Return: num of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
