#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a newline using recursion.
 * @s: Pointer to the string to print.
 */
void _puts_recursion(char *s)
{
	/* Cas de base: si on atteint la fin de la chaîne */
	if (*s == '\0')
	{
		_putchar('\n'); /* Afficher un retour à la ligne */
		return;
	}
	/* Afficher le caractère actuel */
	_putchar(*s);

	/* Appel récursif avec le caractère suivant */
	_puts_recursion(s + 1);
}
