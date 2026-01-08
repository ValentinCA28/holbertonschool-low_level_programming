#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: Affiche la table de multiplication de 0 à 9. Pour chaque
 * ligne x (0..9), la fonction parcourt y de 0 à 9 et affiche le produit
 * x * y séparé par des virgules et des espaces, puis termine la ligne
 * par un saut de ligne.
 *
 * Return: void
 */
void times_table(void)
{
    int x;
    int y;
    int produit;
    char buffer[42]; /* Buffer pour stocker la ligne de la table */
    int i = 0;

    /* Parcourir les lignes de 0 à 9 */
    for (x = 0; x <= 9; x++)
    {
        i = 0; /* Réinitialiser l'index du buffer */
        /* Parcourir les colonnes de 0 à 9 */
        for (y = 0; y <= 9; y++)
        {
            produit = x * y; /* Calculer le produit */
            /* Si le produit a 2 chiffres */
            if (produit >= 10)
            {
                buffer[i++] = '0' + (produit / 10); /* Dizaine */
                buffer[i++] = '0' + (produit % 10); /* Unité */
            }
            else
            {
				buffer[i++] = ' '; /* Espace pour alignement */
                buffer[i++] = '0' + produit; /* Unité */
            }
			/* Ajouter virgule et espace sauf pour le dernier élément */
			if (y < 9)
			{
				buffer[i++] = ','; buffer[i++] = ' ';
			}
		}
        _putchar('\n'); /* Retour à la ligne */
        write(1, buffer, i); /* Écrire le buffer */
    }
}
