#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square using the character #
 * @size: The size of the square (both width and height)
 *
 * Description: Uses nested loops to print a square of '#' characters.
 * If size is 0 or negative, only prints a newline.
 * Return: void
 */
void print_square(int size)
{
	int x;
	int y;

	/* Si size est négatif ou zéro, afficher seulement un retour à la ligne */
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	/* Parcourir les lignes */
	for (x = 0; x < size; x++)
	{
		/* Afficher size caractères # par ligne */
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		/* Retour à la ligne après chaque ligne */
		_putchar('\n');
	}
}
