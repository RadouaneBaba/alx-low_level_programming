#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all list_t elements
 * @h: list_t
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	list_t *l = h;

	if (h == NULL)
		return (0);


	while (l != NULL)
	{
		if (l->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", l->len, l->str);
		l = l->next;
		n++;
	}
	return (n);
}
