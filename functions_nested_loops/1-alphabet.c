#include "main.h"
/**
* print_alphabet - print alphabet in lower cases and return line
* Description
*
* Return: void
*/
void print_alphabet(void)

{
	/* Commencer par 'a' */
	char c = 'a';

	/* Parcourir de 'a' à 'z' */
	while (c <= 'z')

	{
		_putchar(c); /* Afficher la lettre */
		c++; /* Passer à la lettre suivante */
	}
	/* Afficher un retour à la ligne */
	_putchar('\n');
}
