#include "lists.h"

/**
 * free_list - frees list
 * @head: list
 */


void free_list(list_t *head)
{
	if (head == NULL)
		return;
	else
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}

}
