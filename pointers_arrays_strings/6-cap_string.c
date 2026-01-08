#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: String to modify
 * Return: Pointer to modified string
 */
char *cap_string(char *s)

{
	/* Sauvegarder le pointeur de début */
	char *start = s;
	int temp = 1; /* Flag indiquant si on doit capitaliser le prochain caractère */

	/* Parcourir la chaîne */
	for (; *s; s++)
	{
		/* Si c'est un séparateur de mots */
		if (*s == ' ' || *s == '\t' || *s == '\n' ||
			*s == ',' || *s == ';' || *s == '.' ||
			*s == '!' || *s == '?' || *s == '"' ||
			*s == '(' || *s == ')' || *s == '{' || *s == '}')
		{
			temp = 1; /* Capitaliser le prochain caractère */
		}

		/* Si on doit capitaliser et que c'est une minuscule */
		else if (temp && *s >= 'a' && *s <= 'z')
		{
			*s -= 32; /* Convertir en majuscule */
			temp = 0; /* Ne plus capitaliser jusqu'au prochain séparateur */
		}

		else
		{
			temp = 0; /* Continuer sans capitaliser */
		}
	}
	/* Retourner le pointeur de début */
	return (start);
}
