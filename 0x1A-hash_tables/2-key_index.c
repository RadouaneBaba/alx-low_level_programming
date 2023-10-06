#include "hash_tables.h"

/**
 * key_index - gives the index of a key based on hash function
 *
 * @key: key string
 * @size: size of the array of hashtable
 * Return: index int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
