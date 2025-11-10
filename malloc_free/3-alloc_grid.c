#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2D array of integers (width x height),
 *              all elements initialized to 0.
 * @width:  Number of columns
 * @height: Number of rows
 *
 * Return: Pointer to 2D array (int **), or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int h, w;
	int **grid;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			for (w = 0; w < h; w++)
			{
				free(grid[w]);
			}
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
