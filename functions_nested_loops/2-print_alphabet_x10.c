#include "main.h"
/**
* print_alphabet_x10 - print alphabet in lower cases 10 times
* return line each time
*
* Return: void
*/
void print_alphabet_x10(void)

{
int x;
char c;

for (x = 0; x < 10; x++)

{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
