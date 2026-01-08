#include "main.h"
/**
 * _isalpha - Vérifie si le caractère passé est une lettre de l'alphabet
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est une lettre (majuscule ou minuscule), 0 sinon.
 */
int _isalpha(int c)

{
	/* Vérifier si c'est une minuscule */
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* C'est une lettre minuscule */
	}
	/* Vérifier si c'est une majuscule */
	else if (c >= 'A' && c <= 'Z')
	{
		return (1); /* C'est une lettre majuscule */
	}
	else
	{
		return (0); /* Ce n'est pas une lettre */
	}
}
