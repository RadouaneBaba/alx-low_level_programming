#include <stdio.h>

/**
 * main - entry
 *
 * Return: Always (0) success
 *
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k, l;

	while (i < 10)
	{
		while (j < 9)
		{
			k = i;
			while (k < 10)
			{
				if (k == 0)
					l = 1;
				else
					l = j;
				while (l < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');

					if (i != 9 || j != 8 || k != 9 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}
