#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on a format string
 * @format: A string containing format specifiers for the arguments
 *          'c' - prints a char
 *          'i' - prints an integer
 *          'f' - prints a float
 *          's' - prints a string (prints "(nil)" if string is NULL)
 *          Any other character in format is ignored
 *
 * Description: This function takes a variable number of arguments and prints
 *              them according to the format specifiers in the format string.
 *              Arguments are separated by ", " and a newline is printed at
 *              the end.
 *
 * Return: Nothing (void)
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	char *sep = ""; /* Séparateur (vide au début, ", " après) */

	/* Initialiser la liste d'arguments */
	va_start(args, format);

	/* Parcourir la chaîne de format */
	while (format && format[i])
	{
		/* Si c'est un spécificateur de format valide */
		if (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's')
		{
			printf("%s", sep); /* Afficher le séparateur */
			sep = ", "; /* Après le premier, le séparateur devient ", " */
		}
		/* Traiter selon le type de format */
		switch (format[i])
		{
		case 'c': /* Caractère */
			printf("%c", va_arg(args, int));
			break;
		case 'i': /* Entier */
			printf("%d", va_arg(args, int));
			break;
		case 'f': /* Flottant */
			printf("%f", va_arg(args, double));
			break;
		case 's': /* Chaîne */
		{
			char *str = va_arg(args, char *);

			if (!str) /* Si NULL, afficher (nil) */
				str = "(nil)";
			printf("%s", str);
			break;
		}
		}
		i++;
	}
	/* Afficher un retour à la ligne */
	printf("\n");
	/* Nettoyer la liste d'arguments */
	va_end(args);
}
