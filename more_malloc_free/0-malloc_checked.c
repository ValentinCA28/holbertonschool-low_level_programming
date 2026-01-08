#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: Pointer to the allocated memory
 * If malloc fails, terminates the process with status 98
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

/* Allouer b octets de mémoire */
ptr = malloc(b);
/* Si l'allocation échoue */
if (ptr == NULL)
{
	exit(98); /* Terminer le programme avec le code 98 */
}

/* Retourner le pointeur vers la mémoire allouée */
return (ptr);
}
