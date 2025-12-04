#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new; /* nouveau noeud a creer */

	new = malloc(sizeof(dlistint_t)); /* alloue memoire pour le noeud */
	if (new == NULL) /* verifie si allocation reussie */
	{
		return (NULL);
	}
	new->n = n; /* stocke la valeur */
	new->prev = NULL; /* pas de noeud precedent (debut de liste) */
	new->next = *head; /* pointe vers l'ancien premier noeud */

	if (*head != NULL) /* si liste non vide */
	{
		(*head)->prev = new; /* ancien premier pointe vers le nouveau */
	}
	*head = new; /* met a jour la tete de liste */
	return (new); /* retourne le nouveau noeud */
}
