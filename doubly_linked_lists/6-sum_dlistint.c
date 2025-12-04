#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 *
 * Return: sum of all n values, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /* somme des valeurs */

	while (head != NULL) /* parcourt la liste */
	{
		sum += head->n; /* ajoute la valeur du noeud */
		head = head->next; /* passe au suivant */
	}
	return (sum); /* retourne la somme totale */
}
