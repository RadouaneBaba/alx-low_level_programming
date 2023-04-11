#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of chars
 * @size: memory size of the array
 * @c: the char to begin with
 * Return: array of chars or NULL
 */

char *create_array(unsigned int size, char c)
{

	char *t = malloc(sizeof(char) * size);
	int i = 0;

	if (size == 0)
		return (NULL);
	if (t == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
