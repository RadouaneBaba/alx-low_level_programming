#include "main.h"

/**
 * get_bit - give the bit at a given index
 * @n: the num
 * @index: the index
 * Return: the value of bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n >> index == 0)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	return (0);
}
