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
int e;
for (c = 0; c <= 8; c++)
for (d = c + 1; d <= 9; d++)
for (e = d + 1; e <= 9; e++)
	{
		putchar(c + '0');
		putchar(d + '0');
		putchar(e + '0');
	if (!(c == 8 && d == 9 && e == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}
