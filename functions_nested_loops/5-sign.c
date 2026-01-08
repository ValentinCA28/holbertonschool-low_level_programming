#include "main.h"
/**
 * print_sign - Affiche le signe d'un nombre
 * @n: Le nombre à vérifier
 *
 * Return: 1 si n est positif, 0 si n est zéro, -1 si n est négatif
 */

int print_sign(int n)

{
	/* Vérifier si n est positif */
	if (n > 0)
	{
		_putchar('+'); /* Afficher le signe plus */
		return (1);
	}
	/* Vérifier si n est zéro */
	else if (n == 0)
	{
		_putchar('0'); /* Afficher zéro */
		return (0);
	}
	/* n est négatif */
	else
	{
		_putchar('-'); /* Afficher le signe moins */
		return (-1);
	}
}
