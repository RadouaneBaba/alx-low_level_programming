#include "main.h"

/**
 * print_to_98 - print nums
 *
 * @n: number
 *
 */

void print_to_98(int n)
{
	int a = n % 10;
	int b = n - a;

	if (n <= 98)
	{
		while (b < 10)
		{
			while (a < 9)
			{
				_putchar(b + '0');
				_putchar(a + '0');
				if (a == 8 && b == 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				a++;
			}
			b++;
		}
		_putchar('\n');
	}
	else if (n >= 98)
	
}
