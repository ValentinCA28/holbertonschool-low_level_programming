#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses an array of integers
 * @a: Array to reverse
 * @n: Number of elements
 */
void reverse_array(int *a, int n)

{
	/* Pointeur vers le début du tableau */
	int *x = a;
	/* Pointeur vers la fin du tableau */
	int *y = a + n - 1;
	int temp;

	/* Échanger les éléments du début et de la fin jusqu'au milieu */
	while (x < y)
	{
		temp = *y; /* Sauvegarder l'élément de fin */
		*y = *x; /* Copier l'élément de début vers la fin */
		*x = temp; /* Copier l'élément sauvegardé au début */
		x++; /* Avancer le pointeur de début */
		y--; /* Reculer le pointeur de fin */
	}
}
