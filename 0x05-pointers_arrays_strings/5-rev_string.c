#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 */

void rev_string(char *s)
{
	int i = 0;
	int l;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	while (i--)
	{
		c = s[i];
		s[i] = s[l - i];
		s[l - i] = c;
	}
}
