#include "main.h"

/**
 * print_diagsums - sum of diags
 * @a: array of int
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int fd = 0;
	int ld = 0;

	while (i < size)
	{
		fd += a[i * size + i];
		ld += a[i * size + (size - i - 1)];
		i++;
	}
	printf("%d, %d\n", fd, ld);
}
