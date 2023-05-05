#include "main.h"

/**
 * set_bit - set the value of bit to 1
 *
 * @n: pointer to the num
 * @index: index to set
 * Return: 1 on success or -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	if (!((*n >> index) & 1))
		*n += (1 << index);
	return (1);
}
