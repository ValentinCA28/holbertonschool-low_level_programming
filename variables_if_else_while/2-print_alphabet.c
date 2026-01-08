#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
/* Afficher l'alphabet en minuscule de a à z */
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
