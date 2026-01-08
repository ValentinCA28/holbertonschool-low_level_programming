#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *temp;
	unsigned int len = 0;

	/* Créer le nouveau nœud */
	end = malloc(sizeof(list_t));
	if (end == NULL)
	{
		return (NULL);
	}
	/* Dupliquer la chaîne */
	end->str = strdup(str);
	if (end->str == NULL)
	{
		free(end); /* Libérer le nœud si strdup échoue */
		return (NULL);
	}
	/* Calculer la longueur de la chaîne */
	while (str && str[len])
	{
		len++;
	}
	/* Initialiser les champs du nouveau nœud */
	end->len = len;
	end->next = NULL; /* Ce sera le dernier nœud */
	/* Si la liste est vide, le nouveau nœud devient la tête */
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	/* Parcourir la liste jusqu'au dernier nœud */
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/* Lier le nouveau nœud à la fin */
	temp->next = end;
	return (end);
}
