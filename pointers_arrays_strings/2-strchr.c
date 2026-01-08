#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: Pointer to the string to search
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of c in s,
 *         or NULL if the character is not found.
 *         If c is '\0', returns a pointer to the terminator.
 */
char *_strchr(char *s, char c)

{

	/* Parcourir la chaîne caractère par caractère */
	while (*s != '\0')
	{
		/* Si le caractère actuel correspond à c */
		if (*s == c)
		{
			return (s); /* Retourner un pointeur vers ce caractère */
		}
		s++; /* Passer au caractère suivant */
	}
	/* Si on cherche le caractère nul, le retourner */
	if (c == '\0')
	{
		return (s);
	}
	/* Caractère non trouvé */
	return (NULL);
	}
