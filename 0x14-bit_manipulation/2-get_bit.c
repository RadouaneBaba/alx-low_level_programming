#include "main.h"

/**
 * get_bit - give the bit at a given index
 * @n: the num
 * @index: the index
 * Return: the value of bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	return ((n >> index) & 1);
}
