#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of the doubly linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t temp = 0; /* compteur de noeuds */

	while (h != NULL) /* parcourt la liste */
	{
		printf("%d\n", h->n); /* affiche la valeur du noeud */
		temp++; /* incremente le compteur */
		h = h->next; /* passe au noeud suivant */
	}
	return (temp); /* retourne le nombre de noeuds */
}
