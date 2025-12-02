#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Description: This function frees all nodes in a singly linked list.
 * For each node, it first frees the string (str), then frees the node
 * itself, preventing memory leaks by saving the next pointer before
 * freeing the current node.
 *
 * Return: nothing (void)
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
