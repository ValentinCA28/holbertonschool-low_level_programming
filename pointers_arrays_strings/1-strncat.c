#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string to be appended
 * @n: The maximum number of bytes from src to concatenate
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)


{
	/* Sauvegarder le pointeur de début */
	char *comb = dest;

	/* Aller à la fin de la chaîne dest */
	while (*dest != '\0')
	{
		dest++;
	}
	/* Copier au maximum n caractères de src vers dest */
	while (n > 0 && *src != '\0')
	{
		*dest = *src; /* Copier le caractère */
		src++; /* Avancer dans src */
		dest++; /* Avancer dans dest */
		n--; /* Décrémenter le compteur */
	}
	/* Ajouter le caractère nul de fin */
	*dest = '\0';
	return (comb);
	printf("\n");
}
