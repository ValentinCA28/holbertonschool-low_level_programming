#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: Number of times the character \ should be printed
 *
 * Description: Prints a diagonal line using backslash characters.
 * Each line is indented with spaces based on its position.
 * If n is 0 or less, only prints a newline.
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
