#include "main.h"
/**
* print_alphabet - print alphabet in lower cases and return line
* Description
*
* Return: void
*/
void print_alphabet(void)

{
	char c = 'a';

	while (c <= 'z')

	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
