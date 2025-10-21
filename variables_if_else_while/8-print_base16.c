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

for (c = 0 ; c < 10 ; c++)
{
	putchar(c + '0');
}
for (c = 'a' ; c <= 'f' ; c++)
{
	putchar(c);
}
{
	putchar('\n');
}
return (0);
}
