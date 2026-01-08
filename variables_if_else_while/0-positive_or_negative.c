#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Generates a random number and prints whether it is
 * positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Initialiser le générateur de nombres aléatoires */
	srand(time(0));
	/* Générer un nombre aléatoire */
	n = rand() - RAND_MAX / 2;
	/* Vérifier si n est positif */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	/* Vérifier si n est égal à zéro */
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	/* n est négatif */
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
