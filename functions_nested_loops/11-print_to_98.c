#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting integer
 *
 * Description: This function prints all natural numbers from the input
 * integer n to 98, followed by a new line. If n is less than or equal to 98,
 * it prints in ascending order. If n is greater than 98, it prints in
 * descending order. Numbers are separated by a comma and a space, except
 * for the last number (98).
 */

void print_to_98(int n)
{
	/* Si n est inférieur ou égal à 98, compter en croissant */
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n); /* Afficher le nombre */
			{
				/* Ajouter une virgule sauf pour 98 */
				if (n != 98)
					printf(", ");
			}
			n++; /* Incrémenter n */
		}
	}
	/* Si n est supérieur à 98, compter en décroissant */
	else
	{
		while (n >= 98)
		{
			printf("%d", n); /* Afficher le nombre */
			{
				/* Ajouter une virgule sauf pour 98 */
				if (n != 98)
					printf(", ");
			}
			n--; /* Décrémenter n */
		}
	}
	printf("\n"); /* Retour à la ligne final */
}
