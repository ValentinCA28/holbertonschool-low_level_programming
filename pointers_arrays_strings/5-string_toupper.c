#include "main.h"

/**
 * string_toupper - Change toutes les minuscules en majuscules
 * @s: La chaîne à modifier
 *
 * Return: Pointeur vers la chaîne modifiée
 */
char *string_toupper(char *s)

{
	/* Sauvegarder le pointeur de début */
	char *x = s;

	/* Parcourir la chaîne */
	for (; *s; s++)
	{
		/* Si le caractère est une minuscule */
		if (*s >= 'a' && *s <= 'z')
			*s -= 32; /* Convertir en majuscule (différence ASCII) */
	}
	/* Retourner le pointeur de début */
	return (x);
}
