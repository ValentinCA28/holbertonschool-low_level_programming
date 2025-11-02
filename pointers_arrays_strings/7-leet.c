#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: String to encode
 * Return: Pointer to encoded string
 */
char *leet(char *s)
{
	char *start = s;
	char *letters = "aAeEoOtTlL";
	char *numb = "4433007711";
	int i;

	for (i = 0; *s; s++)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*s == letters[i])
			{
				*s = numb[i];
				break;
			}
		}
	}
	return (start);
}
