#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - make two dimensional array of ints
 * @width: int
 * @height: int
 * Return: pointer to the array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0;
	int j = 0;
	int k = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	while (k < height)
	{
		arr[k] = malloc(sizeof(int) * width);
		if (arr[k] == NULL)
		{
			while (k >= 0)
			{
				free(arr[k]);
				k--;
			}
			free(arr);
			return (NULL);
		}
		k++;
	}

	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
