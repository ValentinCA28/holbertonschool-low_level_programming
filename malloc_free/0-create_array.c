#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array with
 *
 * Return: NULL if size = 0 or if malloc fails,
 * otherwise a pointer to the array
 */
char *create_array(unsigned int size, char c)

{
	char *array;
	unsigned int i;

	/* Si la taille est 0, retourner NULL */
	if (size == 0)
	{
		return (NULL);
	}

	/* Allouer de la mémoire pour le tableau */
	array = malloc(sizeof(char) * size);

	/* Si l'allocation échoue, retourner NULL */
	if (array == NULL)
	{
		return (NULL);
	}

	/* Initialiser chaque élément du tableau avec le caractère c */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	/* Retourner le pointeur vers le tableau alloué */
	return (array);
}
