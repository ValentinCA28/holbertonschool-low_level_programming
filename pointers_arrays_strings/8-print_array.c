#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an integer array
 * @a: pointer to the array of integers
 * @n: number of elements to print
 *
 * Description: Prints the specified number of elements
 * from the array, separated by commas and spaces,
 * followed by a new line
 * Return: void
 */
void print_array(int *a, int n)
{

	int i;

	/* Parcourir et afficher les n éléments du tableau */
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]); /* Afficher l'élément */
		/* Ajouter une virgule et un espace sauf après le dernier élément */
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	/* Afficher un retour à la ligne */
	printf("\n");
}
