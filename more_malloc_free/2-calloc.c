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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	calc = nmemb * size;

	ptr = malloc(calc);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < calc; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
