#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* Parcourir la liste jusqu'à la fin */
	while (h != NULL)
	{
		/* Si la chaîne est NULL, afficher (nil) */
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			/* Afficher la longueur et la chaîne */
			printf("[%u] %s\n", h->len, h->str);
		}
		count++; /* Compter le nœud */
		h = h->next; /* Passer au nœud suivant */
	}
	/* Retourner le nombre total de nœuds */
	return (count);
}
