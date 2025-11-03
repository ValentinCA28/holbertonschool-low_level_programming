#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string containing the bytes to look for
 *
 * Return: Pointer to the first byte in s that matches one in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
			return (s);
		}
	}
	s++;
	}
	return (NULL);
}
