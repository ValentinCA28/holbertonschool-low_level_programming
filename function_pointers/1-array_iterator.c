#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array of integers
 * @size: size of the array
 * @action: pointer to the function to apply on each element
 *
 * Description: If array or action is NULL, do nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* Vérifier que array et action ne sont pas NULL */
	if (array != NULL && action != NULL)
	{
		/* Parcourir chaque élément du tableau */
		for (i = 0; i < size; i++)
		{
			/* Appeler la fonction action sur l'élément actuel */
			action(array[i]);
		}
	}
}
