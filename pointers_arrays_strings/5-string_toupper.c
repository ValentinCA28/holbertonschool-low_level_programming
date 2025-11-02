#include "main.h"

/**
 * string_toupper - Change toutes les minuscules en majuscules
 * @s: La chaîne à modifier
 *
 * Return: Pointeur vers la chaîne modifiée
 */
char *string_toupper(char *s)

{
	char *x = s;

	for (; *s; s++)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
	}
	return (x);
}
