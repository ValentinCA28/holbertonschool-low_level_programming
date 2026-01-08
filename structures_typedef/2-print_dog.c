#include "dog.h"
#include <stdio.h>


/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 *
 * Description: If d is NULL, the function does nothing.
 * If a member (name or owner) is NULL, it prints (nil) instead.
*/
void print_dog(struct dog *d)
{
	/* Si le pointeur est NULL, ne rien faire */
	if (d == NULL)
	{
		return;
	}
	/* Afficher le nom (ou (nil) si NULL) */
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	/* Afficher l'âge */
	printf("Age: %f\n", d->age);
	/* Afficher le propriétaire (ou (nil) si NULL) */
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
