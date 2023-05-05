#include "main.h"

/**
 * flip_bits - get from num to another
 * @n: first num
 * @m: second num
 * Return: number of bits need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int j = 1;

	while ((j <= m) | (j <= n))
	{
		if ((j & m) != (j & n))
			i++;
		j <<= 1;
	}

	return (i);
}
