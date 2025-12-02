#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 *
 * Description: This function creates a new node, duplicates the given
 * string, calculates its length, and inserts the node at the beginning
 * of the list. Memory allocation is checked at each step.
 *
 * Return: the address of the new element, or NULL if it failed
 */
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
