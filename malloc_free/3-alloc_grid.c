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

	/* Si les dimensions sont invalides, retourner NULL */
	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	/* Allouer un tableau de pointeurs (une ligne par pointeur) */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL); /* Si l'allocation échoue */
	}
	/* Pour chaque ligne */
	for (h = 0; h < height; h++)
	{
		/* Allouer la mémoire pour une ligne */
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			/* Si l'allocation échoue, libérer ce qui a déjà été alloué */
			for (w = 0; w < h; w++)
			{
				free(grid[w]);
			}
			free(grid);
			return (NULL);
		}
		/* Initialiser chaque élément de la ligne à 0 */
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	/* Retourner le pointeur vers le tableau 2D */
	return (grid);
}
