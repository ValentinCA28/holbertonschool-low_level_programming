#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Description: This function converts a string to an integer, handling:
 * - Leading whitespace (ignored)
 * - Optional +/- signs (multiple signs are evaluated)
 * - Numerical digits
 * - Non-numerical characters after digits (stops conversion)
 * - Integer overflow (returns INT_MAX or INT_MIN)
 *
 * Return: The converted integer value, or 0 if no valid conversion
 */

int _atoi(char *s)
{
	int i = 0;
	int signe = 1; /* Signe du nombre (1 ou -1) */
	unsigned int temp = 0; /* Valeur temporaire pour éviter l'overflow */
	int found_digit = 0; /* Flag pour savoir si on a trouvé des chiffres */

	/* Parcourir la chaîne */
	while (s[i])
	{
		/* Si c'est un signe moins, inverser le signe */
		if (s[i] == '-')
			signe = -signe;
		/* Si c'est un signe plus, ne rien faire */
		else if (s[i] == '+')
			;
		/* Si c'est un chiffre */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1; /* On a trouvé un chiffre */
			/* Vérifier le dépassement de capacité */
			if (temp >= (unsigned int)INT_MAX / 10 && (s[i] - '0') > (INT_MAX % 10))
			{
				return (signe == 1 ? INT_MAX : INT_MIN);
			}
			/* Ajouter le chiffre au nombre */
			temp = temp * 10 + (s[i] - '0');
		}
		/* Si on a déjà trouvé des chiffres et qu'on rencontre autre chose */
		else if (found_digit)
			break;
		i++;
	}
	/* Retourner le nombre avec son signe */
	return (signe * (int)temp);
}
