#include "main.h"
/**
 * print_diagonal - literally diagonal
 *
 * @n: diagonal length
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
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
}
