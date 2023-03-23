#include "main.h"

/**
 * print_line - literally a line
 *
 * @n: line length
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
