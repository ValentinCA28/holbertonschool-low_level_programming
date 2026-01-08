#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string containing the bytes to look for
 *
 * Return: Pointer to the first byte in s that matches one in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	/* Parcourir la chaîne s */
	while (*s != '\0')
	{
	/* Vérifier si le caractère actuel est dans accept */
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
			return (s); /* Retourner un pointeur vers ce caractère */
		}
	}
	s++; /* Passer au caractère suivant */
	}
	/* Aucun caractère correspondant trouvé */
	return (NULL);
}
