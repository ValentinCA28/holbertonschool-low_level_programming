#include "main.h"

/**
 * _strstr - Locate substring (only while loops, no for)
 * @haystack: String to search in
 * @needle:   Substring to find
 *
 * Return: Pointer to first match or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		i = 0;
		while (needle[i] == haystack[i] && needle[i] != '\0')
		{
			i++;
		}
			if (needle[i] == '\0')
			{
				return (haystack);
			}
		haystack++;
	}
	return (NULL);
}
