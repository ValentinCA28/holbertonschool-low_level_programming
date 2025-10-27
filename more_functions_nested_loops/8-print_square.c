#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square using the character #
 * @size: The size of the square (both width and height)
 *
 * Description: Uses nested loops to print a square of '#' characters.
 * If size is 0 or negative, only prints a newline.
 * Return: void
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
