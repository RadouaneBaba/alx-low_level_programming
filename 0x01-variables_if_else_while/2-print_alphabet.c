#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) on success
 *
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	return (0);
}