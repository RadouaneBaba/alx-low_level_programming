#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key string
 * @size: the size int
 * Return the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	if (size < index)
		return (size);
	return (index);
}
