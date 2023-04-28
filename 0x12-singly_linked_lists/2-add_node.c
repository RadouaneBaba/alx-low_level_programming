#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at the beginning to list_t
 * @head: list_t pointer to pointer
 * @str: string
 *
 * Return: adress of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *h = malloc(sizeof(list_t));

	if (h == NULL)
		return (NULL);

	h->str = strdup(str);
	h->len = strlen(str);
	h->next = *head;
	*head = h;
	return (h);
}
