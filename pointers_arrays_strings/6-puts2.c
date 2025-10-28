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
    int len = 0;

    while (str[len] != '\0')
        len++;

    int i = 0;
    while (i < len)
    {
        _putchar(str[i]);
        i += 2;
    }
    _putchar('\n');
}
