/**
 * print_triangle - Prints a triangle using the character #
 * @size: The size of the triangle (number of lines)
 *
 * Description: This function prints a right-aligned triangle made of '#'
 * characters. The triangle's height and base width are equal to size.
 * If size is 0 or negative, only prints a newline.
 * Each line contains (size - line_number) spaces followed by line_number '#'s.
 */
#include "main.h"
#include <stdio.h>

void print_triangle(int size)
{
	int x;
	int y;
	int z;

	/* Si size est négatif ou zéro, afficher seulement un retour à la ligne */
	if (size <= 0)
	{
		_putchar('\n');
	}
	/* Parcourir les lignes du triangle */
	for (x = 1; x <= size; x++)
	{
		/* Afficher les espaces pour aligner à droite */
		for (z = 0; z < size - x; z++)
		{
			_putchar(' ');
		}
		/* Afficher les # pour cette ligne */
		for (y = 0; y < x; y++)
		{
			_putchar('#');
		}
		/* Retour à la ligne */
		_putchar('\n');
	}
}
