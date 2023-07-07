#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key string
 * @size: the size int
 * Return the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size == 0)
		return (NULL);
	return (hash_djb2(key) % size);
}
