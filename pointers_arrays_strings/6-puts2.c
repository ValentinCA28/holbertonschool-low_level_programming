#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to be processed
 *
 * Description: Prints the first character and then every second
 * character of the string (0, 2, 4...), followed by a new line
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
