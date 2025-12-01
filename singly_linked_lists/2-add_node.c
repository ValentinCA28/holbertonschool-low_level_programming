#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{

	list_t *new = malloc(sizeof(size_t));

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);

	new->next = *head;

	*head = new;

	return (new);
}
