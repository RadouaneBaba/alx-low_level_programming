#include "main.h"

/**
 * print_triangle - literally a triangle
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				if (j >= size - i - 1)
					_putchar('#');
				else
					_putchar(' ');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
