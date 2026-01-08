#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: String to encode
 * Return: Pointer to encoded string
 */
char *leet(char *s)
{
	/* Sauvegarder le pointeur de début */
	char *start = s;
	/* Lettres à remplacer (minuscules et majuscules) */
	char *letters = "aAeEoOtTlL";
	/* Chiffres de remplacement correspondants */
	char *numb = "4433007711";
	int i;

	/* Parcourir la chaîne */
	for (i = 0; *s; s++)
	{
		/* Vérifier si le caractère actuel doit être remplacé */
		for (i = 0; letters[i]; i++)
		{
			if (*s == letters[i])
			{
				*s = numb[i]; /* Remplacer par le chiffre correspondant */
				break;
			}
		}
	}
	/* Retourner le pointeur de début */
	return (start);
}
