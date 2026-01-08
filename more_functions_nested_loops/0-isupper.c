#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	/* Vérifier si c est une lettre majuscule */
	if (c >= 'A' && c <= 'Z')
		return (1); /* C'est une majuscule */
	else
		return (0); /* Ce n'est pas une majuscule */
}
