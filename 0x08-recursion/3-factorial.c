#include "main.h"

/**
 * factorial - calculate the factorial of a num
 * @n: int
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
