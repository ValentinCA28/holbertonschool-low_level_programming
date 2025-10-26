#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: Affiche la table de multiplication de 0 à 9. Pour chaque
 * ligne x (0..9), la fonction parcourt y de 0 à 9 et affiche le produit
 * x * y séparé par des virgules et des espaces, puis termine la ligne
 * par un saut de ligne.
 *
 * Return: void
 */
void times_table(void)

{
	int x;
	int y;
	int produit;
	char buffer[39];
	int i = 0;

	for (x = 0; x <= 9; x++)
	{
		i = 0;
		for (y = 0; y <= 9; y++)
		{
			produit = x * y;
			if (produit >= 10)
			{
				buffer[i++] = '0' + (produit / 10);
				buffer[i++] = '0' + (produit % 10);
			}
			else
			{
				buffer[i++] = '0' + produit;
			}

			if (y < 9)
			{
				buffer[i++] = ',';
				buffer[i++] = ' ';
			}
		}
	buffer[i++] = '\n';
	write(1, buffer, i);
	}
}
