/**
 * _strchr - locates a charcter in a string
 * @s: string
 * @c: charcter
 * Return: pointer to a character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] != '\0')
		return (s + i);
	else
		return (NULL);
}
