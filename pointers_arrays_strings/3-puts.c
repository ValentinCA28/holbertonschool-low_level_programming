#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to be printed
 *
 * Description: Prints each character of the string using _putchar
 * until it reaches the null terminator, then prints a newline
 * Return: void
 */
void _puts(char *str)
{
	while(*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
}
