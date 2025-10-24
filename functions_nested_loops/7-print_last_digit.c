#include "main.h"
/**
* print_last_digit - Affiche le dernier chiffre d'un nombre
* @a: Le nombre dont on veut afficher le dernier chiffre
*
* Cette fonction calcule le dernier chiffre du nombre passé en paramètre,
* l'affiche à l'aide de _putchar et retourne ce chiffre (toujours positif).
*
* Retour: Le dernier chiffre du nombre (toujours positif)
*/
int print_last_digit(int a)

{
	int last = a % 10;

	if (last < 0)
		last = -last;

	_putchar(last + '0');
	return (last);
}
