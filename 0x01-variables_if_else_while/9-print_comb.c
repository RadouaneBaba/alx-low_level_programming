#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always (0) success
 *
 */

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
