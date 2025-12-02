#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t temp = 0;

	while (h != NULL)
	{
		temp++;
		h = h->next;
	}
	return (temp);
}
