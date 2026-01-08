#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings (can be NULL).
 * @n: The number of strings passed to the function.
 * @...: A variable number of string arguments.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings is NULL, "(nil)" is printed instead.
 *              A new line is printed at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	/* Initialiser la liste d'arguments */
	va_start(args, n);

	/* Parcourir et afficher toutes les chaînes */
	for (i = 0; i < n; i++)
	{
		const char *x = va_arg(args, const char *); /* Récupérer la chaîne */

		/* Si la chaîne est NULL, afficher (nil) */
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x); /* Afficher la chaîne */
		}
		/* Afficher le séparateur (si non-NULL et pas le dernier) */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	/* Afficher un retour à la ligne */
	printf("\n");
}
