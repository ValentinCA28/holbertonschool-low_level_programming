#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed in reverse
 *
 * Description: First counts the string length, then prints
 * each character from last to first using _putchar
 * Return: void
 */
void print_rev(char *s)
{

	int i = 0;


	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
