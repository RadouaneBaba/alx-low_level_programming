#include "lists.h"

/**
 * free_list - frees list
 * @head: list
 */


void free_list(list_t *head)
{
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
	}
	else
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}

}
