#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string to measure.
 *
 * Return: The length of the string (number of characters before '\0').
 */
int _strlen_recursion(char *s)
{

	/* Cas de base: si on atteint la fin, la longueur est 0 */
	if (*s == '\0')
	{
		return (0);
	}
	/* Sinon: 1 caractère + longueur du reste de la chaîne */
	return (1 + _strlen_recursion(s + 1));
}
