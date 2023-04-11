#include "main.h"
#include <stdlib.h>

/**
 * _strdup - string copy
 * @str: string
 * Return: pointer to the copy or NULL
 */

char *_strdup(char *str)
{
	int size = 0;
	int i = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	s[size] = '\0';
	return (s);


}
