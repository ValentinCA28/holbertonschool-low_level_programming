#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
	* main - Entry point
	*
	* Description: print base16 hexadecimal
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
int c;

/* Afficher les chiffres de 0 à 9 */
for (c = 0 ; c < 10 ; c++)
{
	putchar(c + '0');
}
/* Afficher les lettres de a à f pour l'hexadécimal */
for (c = 'a' ; c <= 'f' ; c++)
{
	putchar(c);
}
{
	putchar('\n');
}
return (0);
}
