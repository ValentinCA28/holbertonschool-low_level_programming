#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to check
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Obtenir le dernier chiffre en utilisant le modulo 10 */
	last_digit = n % 10;

	/* Si le dernier chiffre est négatif, le rendre positif */
	if (last_digit < 0)
		last_digit = -last_digit;

	/* Afficher le dernier chiffre en le convertissant en caractère */
	_putchar('0' + last_digit);

	/* Retourner le dernier chiffre */
	return (last_digit);
}
