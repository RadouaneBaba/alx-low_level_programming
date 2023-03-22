#include "main.h"

/**
 * times_table - multiplication table
 *
 */

void times_table(void)
{
	int i = 0;
	int j;
	int k;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = i * j;
			if (k >= 10)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
				_putchar(k + '0');
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
