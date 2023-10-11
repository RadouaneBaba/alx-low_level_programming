#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int n = 0;
	hash_node_t *elem;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		elem = ht->array[i];
		if (elem && n == 1)
			printf(", ");
		else if (elem && n == 0)
			n = 1;
		while (elem != NULL)
		{
			printf("'%s': '%s'", elem->key, elem->value);
			elem = elem->next;
			if (elem != NULL)
				printf(", ");
		}
		i++;
	}
	printf("}\n");
}
