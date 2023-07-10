#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: frees the grid previously created by alloc_grid function
 * @height: number of rows in grid
 */
void free_grid(int **grid, int height)
{
	int z = 0;

	if (grid == NULL)
		return;

	while (z < height)
	{
		free(grid[z]);
		z++;
	}

		free(grid);
}

