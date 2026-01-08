#include "main.h"

/**
 * check_prime - recursively checks if n is prime
 * @n: number to check
 * @div: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int div)

{
	/* Si div² > n, n'a pas de diviseurs, donc n est premier */
	if (div * div > n)
	{
		return (1);
	}
	/* Si n est divisible par div, n n'est pas premier */
	if (n % div == 0)
	{
		return (0);
	}
	/* Vérifier avec le diviseur impair suivant */
	return (check_prime(n, div + 2));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)

{
	/* Les nombres <= 1 ne sont pas premiers */
	if (n <= 1)
	{
		return (0);
	}
	/* 2 est le seul nombre premier pair */
	if (n == 2)
	{
		return (1);
	}
	/* Si n est pair (et n'est pas 2), n'est pas premier */
	if (n % 2 == 0)
	{
		return (0);
	}
		/* Vérifier les diviseurs impairs à partir de 3 */
		return (check_prime(n, 3));

}
