#include "main.h"

/**
 * _strchr - locates a charcter in a string
 * @s: string
 * @c: charcter
 * Return: return s or NULL
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
