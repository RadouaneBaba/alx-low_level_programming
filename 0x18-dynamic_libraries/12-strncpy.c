#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: string
 * @src: string
 * @n: number
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
