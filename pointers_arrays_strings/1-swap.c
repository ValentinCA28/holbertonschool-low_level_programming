#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
 * Description: Takes two integer pointers and swaps the values
 * they point to using a temporary variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
}
