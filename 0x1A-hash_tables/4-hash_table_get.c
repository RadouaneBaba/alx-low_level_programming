#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: hash_table
 * @key: key to search for
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *elem;

	if (!ht)
		return (NULL);
	elem = ht->array[key_index((unsigned char *) key, ht->size)];
	while (elem != NULL)
	{
		if (strcmp(elem->key, key) == 0)
			return (elem->value);
		elem = elem->next;
	}
	return (NULL);
}
