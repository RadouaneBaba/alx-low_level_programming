#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate memory for an array
 * @nmemb: number
 * @size: number
 * Return: array pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);
	memset(arr, 0, nmemb * size);
	return (arr);
}
