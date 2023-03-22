#include "main.h"
/**
 * print_last_digit - last digit
 *
 *
 * Return: the last digit
 *
 * @n: number
 */

int print_last_digit(int n)
{
	int a = n;

	if (a < 0)
		a = -a % 10;
	else if (a / 10 != 0)
		a %= 10;
	_putchar(a + '0');
	return (a);
}
