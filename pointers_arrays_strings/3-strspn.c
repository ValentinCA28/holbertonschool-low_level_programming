#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: string to check
 * @accept: allowed characters
 *
 * Return: number of bytes in s that are in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (s[count])
	{
		int ok = 0;
		int i = 0;

		while (accept[i])
		{
			if (s[count] == accept[i])
			{
				ok = 1;
				break;
			}
			i++;
		}
		if (!ok)
		{
			return (count);
		}
		count++;
	}
	return (count);
}
