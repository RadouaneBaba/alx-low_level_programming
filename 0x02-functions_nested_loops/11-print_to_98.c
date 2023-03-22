#include <stdio.h>

/**
 * print_to_98 - print nums
 *
 * @n: number
 *
 */

void print_to_98(int n)
{
	int a = n;

	while (a != 98)
	{
		printf("%i, ", a);
		if (a > 98)
		{
			a--;
		}
		else
		{
			a++;
		}
	}
	printf("%i\n", 98);
}
