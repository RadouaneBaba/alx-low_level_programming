#include "main.h"

/**
 * _strspn - gets the length of substring
 * @s: string
 * @accept: string
 * Return: number
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int sum = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				sum++;
			j++;
		}
		i++;
	}
	return (sum);
}
