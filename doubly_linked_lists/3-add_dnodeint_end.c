#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @n: value to store in the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *end;

	/* create a new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	/* positionne sur le dernier node */
	new->n = n;
	new->next = NULL;
	/* if list is empty -> new becomes head */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	/* Find the current last node */
	end = *head;
	while (end->next != NULL)
	{
		end = end->next;
	}
	/* Link the new node at the end */
	end->next = new;
	new->prev = end;
	return (end);
}
