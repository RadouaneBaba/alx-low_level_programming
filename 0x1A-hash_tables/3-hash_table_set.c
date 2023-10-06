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
	unsigned long int index = key_index((unsigned char *) key, ht->size);

	if (!key)
		return (0);
	elem = ht->array[index];
	while (elem != NULL)
	{
		if (strcmp(elem->key, key) == 0)
		{
			elem->value = value;
			return (1);
		}
		elem = elem->next;
	}
	elem = NULL;
	elem = malloc(sizeof(hash_node_t));
	if (elem == NULL)
		return (0);
	elem->key = strdup(key);
	elem->value = strdup(value);
	if (elem->value == NULL || elem->key == NULL)
		return (0);
	elem->next = ht->array[index];
	ht->array[index] = elem;
	return (1);
}
