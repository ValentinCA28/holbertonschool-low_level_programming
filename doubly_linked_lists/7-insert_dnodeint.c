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
	dlistint_t *current;
	dlistint_t *new;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return ((add_dnodeint)(h, n));
	}
	current = *h;
	i = 0;

	while (current != NULL)
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			new->n = n;
			new->next = current;
			new->prev = current->prev;

			current->prev->next = new;
			current->prev = new;

			return (new);
		}
		current = current->next;
		i++;
	}
	if (i == idx)
	{
		return ((add_dnodeint_end)(h, n));
	}
	return (NULL);
}
