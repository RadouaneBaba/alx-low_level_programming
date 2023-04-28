#include "lists.h"
#include <string.h>
/**
 * add_node_end - add node to the end of list
 * @head: pointer to the list
 * @str: string
 *
 * Return: list_t or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t = malloc(sizeof(list_t));
	list_t *h = *head;

	if (t == NULL)
		return (NULL);

	t->str = strdup(str);
	t->len = strlen(str);
	t->next = NULL;

	if (*head == NULL)
	{
		*head = t;
		return (t);
	}
	while (h->next != NULL)
		h = h->next;

	h->next = t;

	return (t);


}
