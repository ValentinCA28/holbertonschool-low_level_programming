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

for (c = '0' ; c < '9' ; c++)
{
 for (d = '1' ; d <= '9' ; d++)
 {
  putchar(c);
  putchar(d);
  if (!(c == '8' && d == '9'))
  {
   putchar(',');
   putchar(' ');
  }
 }
}
putchar('\n');
return(0);
}