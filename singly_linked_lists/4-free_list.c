#include "lists.h"

void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	/* Commencer au début de la liste */
	current = head;

	/* Parcourir et libérer chaque nœud */
	while (current != NULL)
	{
		next = current->next; /* Sauvegarder le pointeur vers le nœud suivant */
		free(current->str); /* Libérer la chaîne */
		free(current); /* Libérer le nœud */
		current = next; /* Passer au nœud suivant */
	}
}
