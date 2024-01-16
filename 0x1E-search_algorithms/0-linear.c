#include <stdio.h>
/**
 * linear_search - search array for a value
 * @array: pointer to array to search
 * @size: size of array
 * @value: value to find
 * Return: index or NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
