#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 * @ht: the hash table
 * @key: key of the new element
 * @value: value corresponding to key
 * Return: 1 on success 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *elem;

	if (!key)
		return (0);
	elem = malloc(sizeof(hash_node_t));
	elem->key = strdup(key);
	elem->value = strdup(value);
	if (elem->value == NULL || elem->key == NULL)
		return (0);
	elem->next = ht->array[key_index((unsigned char *) key, ht->size)];
	ht->array[key_index((unsigned char *) key, ht->size)] = elem;
	return (1);
}
