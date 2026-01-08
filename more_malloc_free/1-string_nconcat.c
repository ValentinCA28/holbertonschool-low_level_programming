#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated memory containing s1 + n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *ptr;

	/* Traiter NULL comme une chaîne vide */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* Calculer la longueur de s1 */
	while (s1[len1] != '\0')
	{
		len1++;
	}
	/* Calculer la longueur de s2 */
	while (s2[len2] != '\0')
	{
		len2++;
	}
	/* Si n est >= longueur de s2, utiliser toute la chaîne s2 */
	if (n >= len2)
	{
		n = len2;
	}
	/* Allouer la mémoire pour s1 + n caractères de s2 + '\0' */
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
	{
		return (NULL); /* Si l'allocation échoue */
	}
	/* Copier s1 dans ptr */
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	/* Copier n caractères de s2 à la suite */
	for (j = 0; j < n; j++)
	{
		ptr[len1 + j] = s2[j];
	}
	/* Ajouter le caractère nul de fin */
	ptr[len1 + n] = '\0';
	/* Retourner le pointeur vers la nouvelle chaîne */
	return (ptr);
}
