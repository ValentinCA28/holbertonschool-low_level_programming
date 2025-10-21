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

for (i = 'a' ; i <= 'z'; i++)
{
	putchar(i);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
return (0);
}


