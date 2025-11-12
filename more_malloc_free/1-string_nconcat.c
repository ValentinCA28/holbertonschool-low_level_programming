#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated memory containing s1 + n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{

	unsigned int len1 = 0, len2 = 0, i, j;
	char *ptr;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[len1 + j] = s2[j];
	}

	ptr[len1 + n] = '\0';
	return (ptr);
}
