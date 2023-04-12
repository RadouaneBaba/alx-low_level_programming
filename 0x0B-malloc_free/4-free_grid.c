#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2d array
 * @grid: 2d array
 * @height: int
 */

void free_grid(int **grid, int height)
{
	int h = 0;

	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
