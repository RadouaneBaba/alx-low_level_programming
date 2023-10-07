#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *elem;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		elem = ht->array[i];
		while (elem != NULL)
		{
			temp = elem;
			elem = elem->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i++;
	}
	free(ht);
}
