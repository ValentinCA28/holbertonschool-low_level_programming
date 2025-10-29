#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to be processed
 *
 * Description: If the length is odd, prints the last (length-1)/2
 * characters. If even, prints the last length/2 characters.
 * Followed by a new line.
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	n = (len + 1) / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
