#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: int
 * Return: pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b * sizeof(*p));

	if (p == NULL)
		exit(98);

	return (p);
}
