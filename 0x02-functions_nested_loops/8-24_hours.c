#include "main.h"
/**
 * jack_bauer - print minutes
 *
 */

void jack_bauer(void)
{
	int a = 0;
	int b;
	int c;
	int d;
	int k = 10;

	while (a < 3)
	{
		if (a == 2)
			k = 4;
		b = 0;
		while (b < k)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
