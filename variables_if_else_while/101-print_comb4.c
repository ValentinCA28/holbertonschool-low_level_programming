#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: print combinaison 3 chiffres
*
* Return: Always 0 (Success)
*/
int main(void)
{
int c;
int d;
int e;
/* Afficher toutes les combinaisons de 3 chiffres différents */
for (c = 0; c <= 8; c++)
for (d = c + 1; d <= 9; d++) /* d doit être supérieur à c */
for (e = d + 1; e <= 9; e++) /* e doit être supérieur à d */
{
putchar(c + '0'); /* Premier chiffre */
putchar(d + '0'); /* Deuxième chiffre */
putchar(e + '0'); /* Troisième chiffre */
/* Ajouter virgule et espace sauf pour la dernière combinaison */
if (!(c == 7 && d == 8 && e == 9))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
