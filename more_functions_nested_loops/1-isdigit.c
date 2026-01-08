#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks if a character is a digit (0-9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	/* Vérifier si c est un chiffre de 0 à 9 */
	if (c >= '0' && c <= '9')
		return (1); /* C'est un chiffre */
	else
		return (0); /* Ce n'est pas un chiffre */
}
