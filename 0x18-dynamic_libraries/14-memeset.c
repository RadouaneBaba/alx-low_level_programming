#include "main.h"

/**
 * _memset - fills memory with a byte
 * @s: string
 * @b: char
 * @n: number
 * Return: string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
