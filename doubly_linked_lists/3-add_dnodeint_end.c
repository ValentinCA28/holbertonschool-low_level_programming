#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @n: value to store in the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new; /* nouveau noeud a creer */
	dlistint_t *end; /* pointeur pour trouver la fin */

	new = malloc(sizeof(dlistint_t)); /* alloue memoire */
	if (new == NULL) /* verifie allocation */
	{
		return (NULL);
	}
	new->n = n; /* stocke la valeur */
	new->next = NULL; /* pas de suivant (fin de liste) */

	if (*head == NULL) /* si liste vide */
	{
		new->prev = NULL; /* pas de precedent */
		*head = new; /* nouveau devient la tete */
		return (new);
	}
	end = *head; /* commence au debut */
	while (end->next != NULL) /* cherche le dernier noeud */
	{
		end = end->next;
	}
	end->next = new; /* lie le dernier au nouveau */
	new->prev = end; /* nouveau pointe vers l'ancien dernier */
	return (end);
}
