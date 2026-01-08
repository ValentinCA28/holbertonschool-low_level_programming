#include "main.h"

/**
 * _print_rev_recursion - Prints a reverse string
 * followed by a newline using recursion.
 * @s: Pointer to the string to print.
 */
void _print_rev_recursion(char *s)
{

	/* Cas de base: si on atteint la fin de la chaîne, arrêter */
	if (*s == '\0')
	{
		return;
	}
	/* D'abord aller jusqu'à la fin de la chaîne (récursion) */
	_print_rev_recursion(s + 1);

	/* Puis afficher le caractère en remontant (ordre inverse) */
	_putchar(*s);
}
