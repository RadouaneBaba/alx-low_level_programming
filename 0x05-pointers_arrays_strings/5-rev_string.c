#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 */

void rev_string(char *s)
{
	int i = 0;
	int l = 0;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i != l)
	{
		c = s[i];
		s[i] = s[l];
		s[l] = c;
		l++;
		i--;
	}
}
