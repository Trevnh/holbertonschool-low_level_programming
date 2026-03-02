#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees a 2d grid previously created by alloc_grid()
 * @grid: 2d array
 * @height: height of the grid
 *
 * Return:
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
