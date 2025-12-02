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
	dlistint_t *new;

	/* Allocate space for new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	/* Initialize new node + point to current head*/
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	/* check if list null, update the position*/
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	/* update head to point to the new node */
	*head = new;
	return (new);
}
