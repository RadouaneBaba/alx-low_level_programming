#include "main.h"
/**
 * jack_bauer - print minutes
 *
 */

void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int k = 10;

	while (a < 3)
	{
		if (a == 2)
			k = 4;
		while (b < k)
		{
			while (c < 6)
			{
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
