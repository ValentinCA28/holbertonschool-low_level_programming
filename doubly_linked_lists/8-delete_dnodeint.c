#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete, starting at 0
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current; /* noeud a supprimer */
	unsigned int i; /* compteur de position */

	if (head == NULL || *head == NULL) /* liste vide ou invalide */
		return (-1);

	current = *head; /* commence au debut */

	for (i = 0; i < index; i++) /* cherche le noeud a l'index */
	{
		if (current == NULL) /* index hors limites */
			return (-1);
		current = current->next;
	}

	if (current == NULL) /* noeud n'existe pas */
		return (-1);

	if (current->prev == NULL) /* suppression du premier noeud */
	{
		*head = current->next; /* met a jour la tete */
		if (*head != NULL) /* si nouveau premier existe */
			(*head)->prev = NULL; /* pas de precedent */
	}
	else /* suppression au milieu ou fin */
	{
		current->prev->next = current->next; /* lie precedent au suivant */
		if (current->next != NULL) /* si suivant existe */
			current->next->prev = current->prev; /* lie suivant au precedent */
	}

	free(current); /* libere le noeud */
	return (1); /* succes */
}
