#include "main.h"

/**
 * print_square - literally a square
 *
 * @size: square size
 *
 */

void print_square(int size)
{
	int i = 0;
	int j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
