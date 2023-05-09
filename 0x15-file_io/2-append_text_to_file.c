#include "main.h"
/**
 * _strlen - string length
 * @s: string
 * Return: length
 */

size_t _strlen(char *s)
{
	size_t i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * append_text_to_file - append text to a file
 *
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, a;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		a = write(fd, text_content, _strlen(text_content));

		if (a < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
