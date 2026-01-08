#include "main.h"

/**
 * print_chessboard - Prints an 8x8 chessboard stored in a 2D array.
 * @a: Pointer to an 8x8 array of characters representing the chessboard.
 */
void print_chessboard(char (*a)[8])

{
	int i;
	int j;

	/* Parcourir chaque ligne de l'échiquier */
	for (i = 0; i < 8 ; i++)
	{
		/* Parcourir chaque colonne de la ligne */
		for (j = 0; j < 8 ; j++)
		{
			_putchar(a[i][j]); /* Afficher la pièce ou case */
		}
		/* Passer à la ligne suivante après chaque rangée */
		_putchar('\n');
	}
}
