#include "main.h"

/**
 * factorial - computes the factorial of a non-negative integer
 * @n: the integer to compute factorial for
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	/* Si n est négatif, erreur (factorielle non définie) */
	if (n < 0)
	{
		return (-1);
	}
	/* Cas de base: 0! = 1 */
	if (n == 0)
	{
		return (1);
	}
	/* Cas récursif: n! = n * (n-1)! */
	return (n * factorial(n - 1));
}
