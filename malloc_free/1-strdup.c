#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: On success, a pointer to the duplicated string.
 *         NULL if str is NULL or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *x;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	x = malloc(sizeof(char) * (len + 1));
	if (x  == NULL)
	{
		return(NULL);
	}
	for (i = 0; i <= len; i++)
	{
		x[i] = str[i];
	}
	return(x);
}


