#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @n: number of params
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int s = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	while (i < n)
	{
		s += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (s);
}
