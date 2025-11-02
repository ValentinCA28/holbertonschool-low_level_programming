#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: String to modify
 * Return: Pointer to modified string
 */
char *cap_string(char *s)

{
	char *start = s;
	int temp = 1;

	for (; *s; s++)
	{
		if (*s == ' ' || *s == '\t' || *s == '\n' ||
			*s == ',' || *s == ';' || *s == '.' ||
			*s == '!' || *s == '?' || *s == '"' ||
			*s == '(' || *s == ')' || *s == '{' || *s == '}')
		{
			temp = 1;
		}

		else if (temp && *s >= 'a' && *s <= 'z')
		{
			*s -= 32;
			temp = 0;
		}

		else
		{
			temp = 0;
		}
	}
	return (start);
}
