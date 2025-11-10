#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid:   Pointer to the 2D array of integers (array of pointers to rows)
 * @height: Number of rows in the grid
 *
 * Description:
 *   This function deallocates the memory of a dynamically allocated
 *   2D grid. It first frees each row (grid[h]) individually, then frees
 *   the main array of pointers (grid). This ensures no memory leaks.
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
