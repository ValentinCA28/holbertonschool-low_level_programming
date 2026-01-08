#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string from source to destination
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Description: Copies the string pointed to by src,
 * including the terminating null byte ('\0'),
 * to the buffer pointed to by dest
 * Return: pointer to dest (the destination string)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copier chaque caractère de src vers dest */
	while (src[i] != '\0')
	{
		dest[i] = src[i]; /* Copier le caractère */
		i++; /* Passer au caractère suivant */
	}
	/* Ajouter le caractère nul de fin */
	dest[i] = '\0';

	/* Retourner le pointeur vers la chaîne de destination */
	return (dest);
}
