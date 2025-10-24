#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @a: The integer to check
 *
 * Return: The absolute value of the integer
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	return (a);
}
