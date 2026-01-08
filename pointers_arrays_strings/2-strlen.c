#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates the length of a string
 * @s: pointer to the string to measure
 *
 * Description: Counts the number of characters in a string
 * until it reaches the null terminator
 * Return: the length of the string (number of characters)
 */
int _strlen(char *s)
{
	int x;

	/* Initialiser le compteur à 0 */
	x = 0;

	/* Parcourir la chaîne jusqu'au caractère nul */
	while (*s != '\0')
	{
		s++; /* Passer au caractère suivant */
		x++; /* Incrémenter le compteur */
	}
	/* Retourner la longueur de la chaîne */
	return (x);
}
