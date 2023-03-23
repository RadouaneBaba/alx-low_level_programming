#include "main.h"

/**
 * print_diagonal - literally a diagonal
 *
 * @n: diagonal length
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
