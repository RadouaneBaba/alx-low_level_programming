#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t elem;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		elem = ht->array[i];
		while (elem != NULL)
		{
			printf("'%s': '%s'", elem->key, elem->value);
			elem = elem->next;
			if (elem != NULL || i != ht->size - 1)
				printf(", ");
		}
		i++;
	}
	printf("}\n");
}
