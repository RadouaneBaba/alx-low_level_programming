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
	while (l < i / 2)
	{
		c = s[l];
		s[l] = s[i - l - 1];
		s[i - l - 1] = c;
		l++;
	}

}
