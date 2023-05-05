#include "main.h"

/**
 * print_binary - printf the binary representation of a number
 * @n: the num to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	if (n == 0)
		_putchar('0');
	while (i <= n)
		i <<= 1;

	while (i >>= 1)
	{
		if (i & n)
			_putchar('1');
		else
			_putchar('0');
	}
}
