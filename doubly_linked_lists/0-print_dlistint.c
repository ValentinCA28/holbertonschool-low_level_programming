#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of the doubly linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t temp = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		temp++;
		h = h->next;
	}
	return (temp);
}
