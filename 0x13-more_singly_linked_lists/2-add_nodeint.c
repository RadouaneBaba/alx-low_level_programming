#include "lists.h"

/**
 * add_nodeint - add node to the beginning
 *
 * @head: the linked list
 *
 * @n: element of the linked list
 *
 * Return: linked list or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
