#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
	* main - Entry point
	*
	* Description: print reverse de 0 a 9 - rev py
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
int c;

/* Afficher l'alphabet sans 'e' et 'q' */
for (c = 'a' ; c <= 'z' ; c++)
if (c != 'e' && c != 'q') /* Exclure e et q */
{
putchar(c);
}
{
putchar('\n');
}
return (0);
}
