#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t doubly linked list
 * @head: pointer to the head of the list
 *
 * Description: We can safely traverse using only ->next because
 *              each node is freed only after we have moved to the next one.
 *              No need to use ->prev here.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current; /* noeud courant a liberer */

	while (head != NULL) /* parcourt la liste */
	{
		current = head; /* sauvegarde le noeud actuel */
		head = head->next; /* avance au suivant avant de liberer */
		free(current); /* libere le noeud */
	}
}
