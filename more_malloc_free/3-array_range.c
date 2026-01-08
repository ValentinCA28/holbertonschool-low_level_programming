#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: start value
 * @max: end value
 *
 * Return: pointer to new array, or NULL on error
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	/* Si min > max, plage invalide */
	if (min > max)
	{
		return (NULL);
	}
	/* Calculer la taille du tableau (inclut min et max) */
	size = max - min + 1;

	/* Allouer la mémoire pour le tableau */
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL); /* Si l'allocation échoue */
	}
	/* Remplir le tableau avec les valeurs de min à max */
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	/* Retourner le pointeur vers le tableau */
	return (ptr);
}
