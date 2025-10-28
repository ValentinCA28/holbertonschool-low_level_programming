#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates the length of a string
 * @s: pointer to the string to measure
 *
 * Description: Counts the number of characters in a string
 * until it reaches the null terminator
 * Return: the length of the string (number of characters)
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}
	return (x);
}
