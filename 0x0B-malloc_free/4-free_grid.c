#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free grid's allocated memory.
 *@grid: grid.
 *@height: grid's height.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
