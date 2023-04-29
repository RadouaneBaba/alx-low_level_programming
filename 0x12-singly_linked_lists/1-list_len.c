#include "lists.h"

/**
 * list_len - return num of elements in a list_t
 * @h: list_t
 *
 * Return: size_t num of elements
 */

size_t list_len(const list_t *h)
{
	int n = 0;
	const list_t *l = h;

	if (h == NULL)
		return (0);

	while (l != NULL)
	{
		l = l->next;
		n++;
	}

	return (n);
}
