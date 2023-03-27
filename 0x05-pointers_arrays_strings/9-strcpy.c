/**
 * _strcpy - copy a string
 * @dest: destination
 * @src: source
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] <= '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (*dest);
}
