#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - set the value an integer pointer points to to 98
 * @n: pointer to an int to be updated
 *
 * Stores the value 98 at the memory location pointed to by @n.
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
}
