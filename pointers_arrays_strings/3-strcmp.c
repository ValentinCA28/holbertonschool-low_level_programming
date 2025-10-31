#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Description: Compares s1 and s2 character by character.
 * Returns the difference between the first differing characters.
 * If a string ends, the difference is based on '\0' vs the other char.
 *
 * Return: Negative if s1 < s2, zero if s1 == s2, positive if s1 > s2.
 */
int _strcmp(char *s1, char *s2)

{
	int i = 0;

	while (s1[i] != '\0' && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}
