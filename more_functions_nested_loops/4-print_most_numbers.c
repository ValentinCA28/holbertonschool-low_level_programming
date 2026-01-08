#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints numbers from 0 to 9 (excluding 2 and 4)
 *
 * Description: Prints all single digits except 2 and 4,
 * followed by a new line, using _putchar
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	c = '0';

	/* Parcourir les chiffres de 0 à 9 */
	while (c <= '9')
	{
		/* Afficher uniquement si ce n'est ni 2 ni 4 */
		if (c != '2' && c != '4')
			_putchar(c);
		c++;
	}
	/* Retour à la ligne */
	_putchar('\n');
}
