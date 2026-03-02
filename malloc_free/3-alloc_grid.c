#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Returns a grid with width and height given
 * a pointer to the 2d array or NULL if it fails.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Pointer to the 2d array on sucess or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = malloc(height * 4);
	if (!grid)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * 4);
		if (!grid[i])
		{
			free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
