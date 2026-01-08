#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of arguments
 * Return: The sum, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int i;
	va_list ptr;

	/* Si aucun paramètre, retourner 0 */
	if (n == 0)
		return (0);
	/* Initialiser la liste d'arguments variadiques */
	va_start(ptr, n);

	/* Parcourir tous les arguments et les additionner */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int); /* Récupérer l'argument suivant */
	}
	/* Nettoyer la liste d'arguments */
	va_end(ptr);
	/* Retourner la somme totale */
	return (sum);
}
