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
char c, i;

/* Afficher l'alphabet en minuscule */
for (i = 'a' ; i <= 'z'; i++)
{
putchar(i);
}
/* Afficher l'alphabet en majuscule */
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
{
putchar('\n');
}
return (0);
}
