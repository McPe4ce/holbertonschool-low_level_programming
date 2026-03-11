#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a grid, defined by width and height
 * @width: width of the grid
 * @height: height of the grid
 * Return: grid (Success)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int index;
	int j;

	if (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < height; index++)
	{
		grid[index] = malloc(sizeof(int) * width);

		if (grid[index] == NULL)
		{
			while (index > 0)
			{
				free(grid[--index]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[index][j] = 0;
		}
	}
	return (grid);
}
