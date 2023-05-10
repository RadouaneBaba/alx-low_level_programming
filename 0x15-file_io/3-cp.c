#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: num of args
 * @argv: array of strings
 *
 * Return: 0 on success other wise return error
 */

int main(int argc, char *argv[])
{
	int fdf, fdt, k;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdf = open(argv[1], O_RDONLY);
	fdt = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((k = read(fdf, buffer, 1024)) > 0)
	{
		if (write(fdt, buffer, k) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fdf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	if (close(fdt) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
	return (0);
}
