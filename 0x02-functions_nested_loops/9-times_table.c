#include "main.h"

/**
 * times_table - multiplication table
 *
 */

void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			_putchar((i * j) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
