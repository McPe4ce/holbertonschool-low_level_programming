#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the grid memory allocated from alloc_grid
 * @grid: grid that takes the memory
 * @height: Size of the columns
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
