#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 */

void rev_string(char *s)
{
	int i = 0;
	int l = 0;
	char *c;

	while (s[i] != '\0')
	{
		c[i] = s[i];
		i++;
	}
	l = i;
	while (i--)
	{
		s[l - i] = c[i];	
	}
}
