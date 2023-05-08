#include "main.h"

/**
 * read_textfile - reads test file and print it to stdout
 * @filename: file
 * @letters: num to be read and printed
 *
 * Return: num of letters read and printed or 0
 */

ssite_t read_textfile(const char *filename, size_t letters)
{
	int fd, a, b;
	char *buf = malloc(letters);

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
