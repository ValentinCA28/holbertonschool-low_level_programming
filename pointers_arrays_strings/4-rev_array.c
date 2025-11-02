#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses an array of integers
 * @a: Array to reverse
 * @n: Number of elements
 */
void reverse_array(int *a, int n)

{
	int *x = a;
	int *y = a + n - 1;
	int temp;

	while (x < y)
	{
		temp = *y;
		*y = *x;
		*x = temp;
		x++;
		y--;
	}
}
