/**
 * _strlen - length of string
 * @s: string
 * Return: integer length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
