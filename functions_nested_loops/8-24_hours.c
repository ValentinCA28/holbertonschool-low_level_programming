#include "main.h"
#include <unistd.h>

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: Parcourt les heures de 0 à 23 et les minutes de 0 à 59.
 * Pour chaque couple (heure, minute) il remplit un petit buffer de 6
 * octets avec le format "HH:MM\n" et écrit ce buffer sur la sortie
 * standard en utilisant la fonction système write(2).
 *
 * Return: void
 */
void jack_bauer(void)

{
	char buffer[6]; /* Buffer pour stocker l'heure formatée */
	int a, b;

	/* Parcourir les 24 heures */
	for (a = 0; a < 24; a++)
	{
		/* Parcourir les 60 minutes */
		for (b = 0; b < 60; b++)
		{
			buffer[0] = ('0' + (a / 10)); /* Dizaine de l'heure */
			buffer[1] = ('0' + (a % 10)); /* Unité de l'heure */
			buffer[2] = (':'); /* Séparateur */
			buffer[3] = ('0' + (b / 10)); /* Dizaine des minutes */
			buffer[4] = ('0' + (b % 10)); /* Unité des minutes */
			buffer[5] = ('\n'); /* Retour à la ligne */
			write(1, buffer, 6); /* Écrire le buffer */
		}
	}
}
