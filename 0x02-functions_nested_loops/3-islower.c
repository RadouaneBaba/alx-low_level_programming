#include "main.h"

/**
 * _islower - check if char is low case
 *
 * Return: 1 if char is lower case else 0
 *
 * @c: number
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
