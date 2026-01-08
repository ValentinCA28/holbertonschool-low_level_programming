#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	/* Parcourir la liste jusqu'à la fin */
	while (h != NULL)
	{
		count++; /* Compter chaque nœud */
		h = h->next; /* Passer au nœud suivant */
	}
	/* Retourner le nombre total d'éléments */
	return (count);
}
