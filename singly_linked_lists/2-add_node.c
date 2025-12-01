#include "lists.h"
#include <string.h>
#include <stdlib.h>


list_t *add_node(list_t **head, const char *str)
{

	list_t *new;
	unsigned int len = 0;

	if (!head)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str); /* copie de str*/
	if (new->str == NULL)
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
