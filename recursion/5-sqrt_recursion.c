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
	/* Si x² = n, on a trouvé la racine carrée */
	if (x * x == n)
		return (x);
	/* Si x² > n, pas de racine naturelle */
	if (x * x > n)
		return (-1);
	/* Essayer avec x+1 */
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
	/* Pas de racine carrée pour les nombres négatifs */
	if (n < 0)
		return (-1);
	/* Racine de 0 est 0 */
	if (n == 0)
		return (0);
	/* Racine de 1 est 1 */
	if (n == 1)
		return (1);
	/* Commencer la recherche à partir de 1 */
	return (find_sqrt(n, 1));
}
