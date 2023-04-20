#include "function_pointers.h"

/**
 * array_iterator - execute fnc on every element
 * @array: pointer to array
 * @size: array size
 * @action: pointer to func
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action)
	{
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
