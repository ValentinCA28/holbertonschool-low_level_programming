#include <stdio.h>
/**
	* main - Entry point
	*
* Description: print combinaison single digit
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
int c;

/* Afficher les chiffres de 0 à 9 séparés par des virgules */
for (c = '0' ; c <= '9' ; c++)
{
putchar(c);
/* Ajouter une virgule et un espace sauf pour le dernier chiffre */
if (c != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
