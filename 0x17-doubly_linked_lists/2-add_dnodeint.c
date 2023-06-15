#include "lists.h"

/**
 * add_dnodeint - add node to list
 * @head: pointer to the head of list
 * @n: n of the new node
 * Return: the list
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *l = malloc(sizeof(dlistint_t));

	if (l == NULL)
		return (NULL);

	l->n = n;
	l->next = *head;
	l->prev = NULL;
	if (*head == NULL)
	{
		*head = l;
		return (*head);
	}
	(*head)->prev = l;
	*head = l;

	return (*head);
}
