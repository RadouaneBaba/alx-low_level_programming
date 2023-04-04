/**
 * _strchr - locates a charcter in a string
 * @s: string
 * @c: charcter
 * Return: pointer to a character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
