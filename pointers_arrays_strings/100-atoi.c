#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Description: This function converts a string to an integer, handling:
 * - Leading whitespace (ignored)
 * - Optional +/- signs (multiple signs are evaluated)
 * - Numerical digits
 * - Non-numerical characters after digits (stops conversion)
 * - Integer overflow (returns INT_MAX or INT_MIN)
 *
 * Return: The converted integer value, or 0 if no valid conversion
 */

int _atoi(char *s)
{
	int i = 0;
	int signe = 1;
	unsigned int temp = 0;
	int found_digit = 0;

	while (s[i])
	{
		if (s[i] == '-')
			signe = -signe;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			if (temp >= (unsigned int)INT_MAX / 10 && (s[i] - '0') > (INT_MAX % 10))
			{
				return (signe == 1 ? INT_MAX : INT_MIN);
			}
			temp = temp * 10 + (s[i] - '0');
		}
		else if (found_digit)
			break;
		i++;
	}
	return (signe * (int)temp);
}
