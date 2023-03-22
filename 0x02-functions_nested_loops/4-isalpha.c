#include "main.h"

/**
 * _isalpha - check for alphabetic char
 *
 * Return: 1 if alphabetic else 0
 *
 * @c: number
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c <= 97 && c <= 122)
		return (1);
	else
		return (0);
}
