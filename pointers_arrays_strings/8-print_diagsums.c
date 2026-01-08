#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix (treated as 1D array).
 * @size: Size of the matrix (number of rows = number of columns).
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0; /* Somme de la diagonale principale */
	int sum2 = 0; /* Somme de la diagonale secondaire */
	int i;

	/* Parcourir les diagonales */
	for (i = 0; i < size; i++)
	{
		/* Diagonale principale (haut-gauche à bas-droite) */
		sum1 += a[i * size + i];
		/* Diagonale secondaire (haut-droite à bas-gauche) */
		sum2 += a[i * size + (size - 1 - i)];
	}
	/* Afficher les deux sommes */
	printf("%d, %d\n", sum1, sum2);
}
