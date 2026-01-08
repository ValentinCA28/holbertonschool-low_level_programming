#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to be processed
 *
 * Description: If the length is odd, prints the last (length-1)/2
 * characters. If even, prints the last length/2 characters.
 * Followed by a new line.
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	/* Calculer la longueur de la chaîne */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Calculer l'indice de début de la seconde moitié */
	n = (len + 1) / 2;

	/* Afficher la seconde moitié de la chaîne */
	while (str[n] != '\0')
	{
		_putchar(str[n]); /* Afficher le caractère */
		n++; /* Passer au caractère suivant */
	}
	/* Afficher un retour à la ligne */
	_putchar('\n');
}
