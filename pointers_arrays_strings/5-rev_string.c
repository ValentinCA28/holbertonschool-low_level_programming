#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to be reversed
 *
 * Description: First finds string length, then swaps characters
 * from both ends moving towards the center until the entire
 * string is reversed
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	/* Calculer la longueur de la chaîne */
	while (s[len] != '\0')
	{
		len++;
	}
	/* Échanger les caractères du début et de la fin */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i]; /* Sauvegarder le caractère au début */
		s[i] = s[len - 1 - i]; /* Copier le caractère de la fin au début */
		s[len - 1 - i] = temp; /* Copier le caractère sauvegardé à la fin */
	}
}
