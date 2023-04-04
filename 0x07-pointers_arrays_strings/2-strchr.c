/**
 * _strchr - locates a charcter in a string
 * @s: string
 * @c: charcter
 * Return: pointer to a character
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
		return (*s);
	else
		return (NULL);
}
