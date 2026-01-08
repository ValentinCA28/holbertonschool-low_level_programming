#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: pointer to dog to free
 */
void free_dog(dog_t *d)
{
	/* Si le pointeur est NULL, ne rien faire */
	if (d == NULL)
	{
		return;
	}
	/* Libérer la mémoire allouée pour name */
	free(d->name);
	/* Libérer la mémoire allouée pour owner */
	free(d->owner);
	/* Libérer la structure elle-même */
	free(d);
}
