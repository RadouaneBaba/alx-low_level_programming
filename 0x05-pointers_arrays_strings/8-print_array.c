#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: array of int
 * @n: elements
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
