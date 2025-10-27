#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints numbers from 0 to 9 (excluding 2 and 4)
 *
 * Description: Prints all single digits except 2 and 4,
 * followed by a new line, using _putchar
 * Return: void
 */
void print_most_numbers(void)
{
	int c;
	c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
