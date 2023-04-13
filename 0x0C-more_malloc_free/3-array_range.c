#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum num
 * @max: maximum num
 * Return: pointer to arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	while ((min + i) <= max)
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}
