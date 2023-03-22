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
	_putchar(n % 10 + '0');
	return (n % 10);
}
