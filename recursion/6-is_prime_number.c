#include "main.h"

/**
 * check_prime - recursively checks if n is prime starting from div
 * @n: number to check
 * @div: current divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int div)
{
	if (div * div > n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return check_prime(n, div + 2);
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return check_prime(n, 3);
}
