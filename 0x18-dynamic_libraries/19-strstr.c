#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: s or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int b = 1;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = i;
			while (needle[j - i] != '\0' && haystack[j] != '\0')
			{
				if (needle[j - i] != haystack[j])
					b = 0;
				j++;
			}
			if (b == 1)
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
