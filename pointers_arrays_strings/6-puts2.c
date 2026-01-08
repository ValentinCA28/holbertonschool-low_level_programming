#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to be processed
 *
 * Description: Prints the first character and then every second
 * character of the string (0, 2, 4...), followed by a new line
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	/* Calculer la longueur de la chaîne */
	while (str[len] != '\0')
		len++;

	/* Afficher un caractère sur deux (indices 0, 2, 4, etc.) */
	while (i < len)
	{
		_putchar(str[i]); /* Afficher le caractère */
		i += 2; /* Sauter au caractère suivant (pas à pas de 2) */
	}
	/* Afficher un retour à la ligne */
	_putchar('\n');
}
