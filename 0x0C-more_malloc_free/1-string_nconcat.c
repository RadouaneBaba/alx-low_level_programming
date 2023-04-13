#include "main.h"
#include <stdlib.h>

/**
 * _strlen - string length
 * @s: str
 * Return: int
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat - concat two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number
 * Return: string or NULL
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int size = _strlen(s1) + _strlen(s2);
	unsigned int i = 0;

	if (n < _strlen(2))
		size = _strlen(s1) + _strlen(s2);
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
	{
		while (i < size)
		{
			s[i] = s2[i];
			i++;
		}
	}
	else if (s1 != NULL && s2 == NULL)
	{
		while (i < size)
		{
			s[i] = s1[i];
			i++;
		}
	}
	else if (s1 != NULL && s2 != NULL)
	{
		while (i < _strlen(s1))
		{
			s[i] = s1[i];
			i++;
		}
		while (i < size)
		{
			s[i] = s2[i - _strlen(s1)];
			i++;
		}
	}
	s[size] = '\0';
	return (s);
}
