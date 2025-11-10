#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings into a newly allocated space in memory.
 * @s1: First string (NULL is treated as an empty string).
 * @s2: Second string (NULL is treated as an empty string).
 *
 * Return: Pointer to the newly allocated concatenated string (null-terminated),
 *         or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *x;
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}

	x = malloc(len1 + len2 + 1);
	if (x == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		x[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		x[i++] = s2[j];
	}
	x[i] = '\0';
	return (x);
}
