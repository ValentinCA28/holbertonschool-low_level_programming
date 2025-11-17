#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the comparison function (returns non-zero if match)
 *
 * Return: index of first matching element, or -1 if no match or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
