#include "main.h"

/**
 * find_sqrt - recursively finds if x^2 == n
 * @n: number to find square root of
 * @x: current guess (starts at 1)
 *
 * Return: the natural square root, or -1 if none
 */
int find_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (find_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root, or -1 if no natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (find_sqrt(n, 1));
}
