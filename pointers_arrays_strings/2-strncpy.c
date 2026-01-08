#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: destination buffer where the string will be copied
 * @src: source string to copy from
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)

{
	int i;

	/* Copier jusqu'à n caractères ou jusqu'à la fin de src */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i]; /* Copier le caractère */
	}

	/* Remplir le reste avec des caractères nuls si nécessaire */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	/* Retourner le pointeur vers la destination */
	return (dest);
}
