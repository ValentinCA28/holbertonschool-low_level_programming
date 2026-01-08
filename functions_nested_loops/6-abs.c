#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @a: The integer to check
 *
 * Return: The absolute value of the integer
 */

int _abs(int a)
{
	/* Si a est négatif, retourner sa valeur positive */
	if (a < 0)
	{
		return (-a); /* Inverser le signe */
	}
	/* Sinon, retourner a tel quel */
	return (a);
}
