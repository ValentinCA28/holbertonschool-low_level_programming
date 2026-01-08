#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)

{
	/* Sauvegarder le pointeur de début de dest */
	char *comb = dest;

	/* Aller à la fin de la chaîne dest */
	while (*dest != '\0')
	{
		dest++;
	}
	/* Copier src à la fin de dest */
	while (*src != '\0')
	{
		*dest = *src; /* Copier le caractère */
		dest++; /* Avancer dans dest */
		src++; /* Avancer dans src */
	}
	/* Ajouter le caractère nul de fin */
	*dest = '\0';

	/* Retourner le pointeur de début */
	return (comb);
}
