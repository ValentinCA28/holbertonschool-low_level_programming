#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
	* main - Entry point
	*
	* Description: print alphabet minuscule et majuscules
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
int c;
int d;

/* Afficher toutes les combinaisons de 2 chiffres */
for (c = '0' ; c < '9' ; c++)
{
	for (d = '0' ; d <= '9' ; d++)
	{
		/* Sauter 00 */
		if ((c == '0') && (d == '0'))
			continue;
		putchar(c);
		putchar(d);
		/* Ajouter virgule et espace sauf pour la dernière combinaison */
		if (!(c == '8' && d == '9'))
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
