#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * @...: variable arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	/* Initialiser la liste d'arguments */
	va_start(args, n);

	/* Parcourir et afficher tous les nombres */
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int); /* Récupérer le nombre */
		printf("%d", x); /* Afficher le nombre */
		/* Afficher le séparateur (si non-NULL et pas le dernier) */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	/* Afficher un retour à la ligne */
	printf("\n");
	/* Nettoyer la liste d'arguments */
	va_end(args);
}
