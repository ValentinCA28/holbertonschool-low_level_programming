#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: string to check
 * @accept: allowed characters
 *
 * Return: number of bytes in s that are in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	/* Parcourir la chaîne s */
	while (s[count])
	{
		int ok = 0;
		int i = 0;

		/* Vérifier si le caractère actuel est dans accept */
		while (accept[i])
		{
			if (s[count] == accept[i])
			{
				ok = 1; /* Caractère trouvé dans accept */
				break;
			}
			i++;
		}
		/* Si le caractère n'est pas dans accept, s'arrêter */
		if (!ok)
		{
			return (count);
		}
		count++; /* Continuer avec le caractère suivant */
	}
	/* Retourner le nombre de caractères qui sont dans accept */
	return (count);
}
