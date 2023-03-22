#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * Return: 1 positif 0 zero -1 negatif
 *
 * @n: number
 */

int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
