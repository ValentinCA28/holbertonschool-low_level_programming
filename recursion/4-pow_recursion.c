#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent (power).
 *
 * This function computes x^y using recursion.
 * - If y is negative, returns -1 (as required by the task).
 * - If y is 0, returns 1 (since any number to the power of 0 is 1).
 * - Otherwise, recursively calculates x * x^(y-1).
 *
 * Return:
 *   - x raised to the power of y (if y >= 0)
 *   - -1 if y is negative
 */
int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
		return (-1);
	}
	if (y ==0)
	{
		return (1);
	}
		return (x * _pow_recursion (x, y - 1));
}
