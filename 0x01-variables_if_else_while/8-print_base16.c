#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always (0) success
 *
 */

int main(void)
{
	int a = 0;

	while (a < 16)
	{
		if (a < 10)
			putchar(a + '0');
		else
			putchar('a' + a - 10);

		a++;
	}

	putchar('\n');
	return (0);
}
