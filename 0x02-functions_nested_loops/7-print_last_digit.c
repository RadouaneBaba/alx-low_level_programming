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
	int a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a % 10);
}
