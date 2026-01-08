#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: Number of times the character \ should be printed
 *
 * Description: Prints a diagonal line using backslash characters.
 * Each line is indented with spaces based on its position.
 * If n is 0 or less, only prints a newline.
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	/* Si n est négatif ou zéro, afficher seulement un retour à la ligne */
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	/* Parcourir n lignes */
	for (x = 0; x < n; x++)
	{
		/* Afficher x espaces avant le backslash */
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}

		/* Afficher le backslash */
		_putchar('\\');
		/* Retour à la ligne */
		_putchar('\n');
	}
}
