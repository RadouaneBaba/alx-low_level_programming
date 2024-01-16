#include "search_algos.h"

/**
 * print_array - print array
 * @array: array to print
 * @start: index to start
 * @finish: index to finish
 */

void print_array(int *array, int start, int finish)
{
	int i = start;

	printf("Searching in array: ");
	while (i <= finish)
	{
		printf("%d", array[i]);
		if (i != finish)
			printf(", ");
		i++;
	}
	printf("\n");
}

/**
 * binary_search - binary algorithm to search an element
 * @array: pointer to array
 * @size: size of array
 * @value: value to find
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0, j = (int) size - 1, mid;

	if (array == NULL)
		return (-1);
	while (i <= j)
	{
		mid = (i + j) / 2;
		print_array(array, i, j);
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			j = mid - 1;
		else
			i = mid + 1;
	}

	return (-1);
}
