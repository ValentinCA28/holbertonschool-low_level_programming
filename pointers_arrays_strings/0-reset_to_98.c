#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Updates the value pointed to by a pointer
 * @n: Pointer to an integer
 * Description: Takes a pointer to an integer as parameter
 * and updates the value it points to to 98
 */
void reset_to_98(int *n)
{
	*n = 98;

	printf("Value of n =%d\n", *n);
}
