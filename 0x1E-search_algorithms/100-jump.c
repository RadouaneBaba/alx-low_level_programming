#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to find
 * Return: index or -1
 */

int jump_search(int *array, size_t size, int value)
{
	double jump = sqrt(size);
	int prev = 0, step = (int) jump;

	if (array == NULL)
		return (-1);

	while (step < (int) size && array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += (int) jump;
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	while (prev <= step && prev < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
