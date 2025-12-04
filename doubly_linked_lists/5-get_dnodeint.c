#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return (starting from 0)
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current; /* noeud courant */
	unsigned int i = 0; /* compteur de position */

	current = head; /* commence au debut */
	while (current != NULL) /* parcourt la liste */
	{
		if (i == index) /* si index trouve */
		{
			return (current); /* retourne le noeud */
		}
		i++; /* incremente la position */
		current = current->next; /* passe au suivant */
	}
	return (NULL); /* index non trouve */
}
