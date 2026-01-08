#include "main.h"

/**
 * _strstr - Locate substring (only while loops, no for)
 * @haystack: String to search in
 * @needle:   Substring to find
 *
 * Return: Pointer to first match or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	/* Si needle est vide, retourner haystack */
	if (*needle == '\0')
	{
		return (haystack);
	}
	/* Parcourir haystack */
	while (*haystack != '\0')
	{
		i = 0;
		/* Comparer needle avec la portion actuelle de haystack */
		while (needle[i] == haystack[i] && needle[i] != '\0')
		{
			i++;
		}
			/* Si tous les caractères de needle correspondent */
			if (needle[i] == '\0')
			{
				return (haystack); /* Sous-chaîne trouvée */
			}
		haystack++; /* Passer au caractère suivant de haystack */
	}
	/* Sous-chaîne non trouvée */
	return (NULL);
}
