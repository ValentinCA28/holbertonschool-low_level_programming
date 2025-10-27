#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 *
 * Description: Uses nested loops to print numbers 0-14
 * on ten separate lines. For numbers above 9, prints
 * both digits using _putchar
 * Return: void
 */
void more_numbers(void)
{
	int x, c;

	for (x = 0; x < 10; x++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar('0' + (c / 10));
			_putchar('0' + (c % 10));
		}
		_putchar('\n');
	}
}
