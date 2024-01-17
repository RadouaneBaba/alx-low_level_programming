#include "search_algos.h"
/**
 * interpolation_search - interpolation_search algorithm to search an element
 * @array: pointer to array
 * @size: size of array
 * @value: value to find
 * Return: index or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (int) size - 1, mid;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = low + (((double)(high - low) /
		      (array[high] - array[low])) * (value - array[low]));
		if (mid > high)
		{
			printf("Value checked array[%d] is out of range\n", mid);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
