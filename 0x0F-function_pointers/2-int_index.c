
#include "function_pointers"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to array
 * @size: size of the array
 * @cmp: pointer to the compare func
 *
 * Return: index of type int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (cmp)
	{
		while (i < size)
		{
			if (cmp(*(array + i)) != 0)
				return (i);
			i++;
		}
		return (-1);
	}
	return (-1);
}
