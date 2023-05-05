#include "main.h"

/**
 * clear_bit - set value of bit to 0
 * @n: pointer to long int
 * @index: index to the bit
 * Return: 1 on success or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	if ((*n >> index) & 1)
		*n -= (1 << index);
	return (1);
}
