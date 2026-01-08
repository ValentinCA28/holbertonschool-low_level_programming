#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of elements
 * @size: size of each element (in bytes)
 *
 * Return: pointer to allocated memory, or NULL on error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i, calc;

	/* Si un des paramètres est 0, retourner NULL */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Calculer la taille totale à allouer */
	calc = nmemb * size;

	/* Allouer la mémoire */
	ptr = malloc(calc);
	if (ptr == NULL)
	{
		return (NULL); /* Si l'allocation échoue */
	}
	/* Initialiser tous les octets à 0 */
	for (i = 0; i < calc; i++)
	{
		ptr[i] = 0;
	}
	/* Retourner le pointeur vers la mémoire allouée et initialisée */
	return (ptr);
}
