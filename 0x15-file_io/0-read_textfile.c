#include "main.h"
#include <stdio.h>

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
	char *buf = malloc(letters);

	if ((buf == NULL) || (filename == NULL))
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	a = read(fd, buf, letters);

	if (a == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	b = write(1, buf, a);
	if (b == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (b);
}
