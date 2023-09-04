#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this function frees a 2D array of integers.
 * @grid: this parameter is the  2-D array of integers to be freed.
 * @height: this parameter is the height of grid.
 */
void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}
