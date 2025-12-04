#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be inserted (starting from 0)
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current; /* noeud courant */
	dlistint_t *new; /* nouveau noeud */
	unsigned int i; /* compteur de position */

	if (idx == 0) /* insertion au debut */
	{
		return (add_dnodeint(h, n)); /* utilise add_dnodeint */
	}
	current = *h; /* commence au debut */
	i = 0;

	while (current != NULL && i < idx - 1) /* cherche position idx-1 */
	{
		current = current->next;
		i++;
	}
	if (current == NULL) /* index hors limites */
	{
		return (NULL);
	}
	if (current->next == NULL) /* insertion a la fin */
	{
		return (add_dnodeint_end(h, n)); /* utilise add_dnodeint_end */
	}

	new = malloc(sizeof(dlistint_t)); /* alloue memoire */
	if (new == NULL) /* verifie allocation */
	{
		return (NULL);
	}
	new->n = n; /* stocke la valeur */
	new->next = current->next; /* nouveau pointe vers le suivant */
	new->prev = current; /* nouveau pointe vers le precedent */

	if (current->next != NULL) /* si suivant existe */
	{
		current->next->prev = new; /* suivant pointe vers nouveau */
	}
	current->next = new; /* precedent pointe vers nouveau */
	return (new); /* retourne le nouveau noeud */
}
