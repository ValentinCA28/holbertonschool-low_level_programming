#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1 = 0, len2 = 0, i;

	/* Vérifier que name et owner ne sont pas NULL */
	if (!name || !owner)
		return (NULL);

	/* Calculer la longueur de name */
	while (name[len1])
		len1++;
	/* Calculer la longueur de owner */
	while (owner[len2])
		len2++;

	/* Allouer la mémoire pour la structure dog */
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	/* Allouer la mémoire pour name */
	d->name = malloc(len1 + 1);
	if (!d->name)
	{
		free(d); /* Libérer la structure si l'allocation échoue */
		return (NULL);
	}

	/* Copier name */
	for (i = 0; i < len1; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	/* Allouer la mémoire pour owner */
	d->owner = malloc(len2 + 1);
	if (!d->owner)
	{
		free(d->name); /* Libérer name */
		free(d); /* Libérer la structure */
		return (NULL);
	}

	/* Copier owner */
	for (i = 0; i < len2; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	/* Définir l'âge */
	d->age = age;
	/* Retourner le pointeur vers la nouvelle structure */
	return (d);
}
