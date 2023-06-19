#include "main.h"

/**
 * _isupper - check for uppercase
 *
 * @c: number
 *
 * Return: 1 uppercase and 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
