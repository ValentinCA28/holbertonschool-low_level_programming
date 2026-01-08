#include "main.h"
/**
* print_alphabet_x10 - print alphabet in lower cases 10 times
* return line each time
*
* Return: void
*/
void print_alphabet_x10(void)

{
int x;
char c;

/* Répéter 10 fois */
for (x = 0; x < 10; x++)

{
	/* Afficher l'alphabet de 'a' à 'z' */
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c); /* Afficher chaque lettre */
	}
/* Retour à la ligne après chaque alphabet */
_putchar('\n');
}
}
