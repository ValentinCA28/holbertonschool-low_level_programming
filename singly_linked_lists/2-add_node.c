#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	/* Vérifier que head n'est pas NULL */
	if (!head)
	{
		return (NULL);
	}

	/* Allouer de la mémoire pour le nouveau nœud */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	/* Dupliquer la chaîne str */
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new); /* Libérer le nœud si strdup échoue */
		return (NULL);
	}
	/* Calculer la longueur de la chaîne */
	if (str)
    {
        while (str[len])
            len++;
    }
	new->len = len;

	/* Insérer le nouveau nœud au début de la liste */
	new->next = *head;
	*head = new;

	/* Retourner l'adresse du nouveau nœud */
	return (new);
}
