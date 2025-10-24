#include "main.h"
/**
 * _isalpha - Vérifie si le caractère passé est une lettre de l'alphabet
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est une lettre (majuscule ou minuscule), 0 sinon.
 */
int _isalpha(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
