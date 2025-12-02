#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t temp = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		temp++;
		h = h->next;
	}
	return (temp);
}
