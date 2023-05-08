#include "main.h"
/**
 * _strlen - length of str
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * read_textfile - reads test file and print it to stdout
 * @filename: file
 * @letters: num to be read and printed
 *
 * Return: num of letters read and printed or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, a, b;
	char *buf = malloc(_strlen(filename));

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	a = read(fd, buf, letters);

	if (a == -1)
		return (0);
	b = write(1, buf, letters);
	if (b == -1)
		return (0);
	return (b);
}
