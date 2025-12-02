#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *temp;
	unsigned int len = 0;

	/* Create new node end */
	end = malloc(sizeof(list_t));
	if (end == NULL)
	{
		return (NULL);
	}
	/* Copy str*/
	end->str = strdup(str);
	if (end->str == NULL)
	{
		free(end);
		return (NULL);
	}
	/* strlen */
	while (str && str[len])
	{
		len++;
	}
	/* precise end pointer is last */
	end->len = len;
	end->next = NULL;
	/* Check if at end of list*/
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	/* Progress through the list till last node*/
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/* Link last node at the end*/
	temp->next = end;
	return (end);
}
