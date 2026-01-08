#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: On success, a pointer to the duplicated string.
 *         NULL if str is NULL or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *x;
	int i;
	int len = 0;

	/* Si la chaîne est NULL, retourner NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	/* Calculer la longueur de la chaîne */
	while (str[len] != '\0')
	{
		len++;
	}
	/* Allouer de la mémoire pour la copie (+1 pour le '\0') */
	x = malloc(sizeof(char) * (len + 1));
	if (x  == NULL)
	{
		return (NULL); /* Si l'allocation échoue */
	}
	/* Copier chaque caractère, y compris le '\0' */
	for (i = 0; i <= len; i++)
	{
		x[i] = str[i];
	}
	/* Retourner le pointeur vers la chaîne dupliquée */
	return (x);
}


