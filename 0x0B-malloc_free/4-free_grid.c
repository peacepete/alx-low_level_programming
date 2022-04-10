#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A 2-D array of integers
 * @grid: The 2-D array
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
