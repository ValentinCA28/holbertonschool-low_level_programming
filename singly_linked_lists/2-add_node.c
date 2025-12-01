#include "lists.h"
#include <string.h>
#include <stdlib.h>


list_t *add_node(list_t **head, const char *str)
{

	list_t *new = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (!new -> str)
	{
		free(new);
		return (NULL);
	}
	if (str)
    {
        while (str[len])
            len++;
    }
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
