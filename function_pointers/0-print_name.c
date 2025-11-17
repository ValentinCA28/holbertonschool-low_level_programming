#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: pointer to the function that will print the name
 *
 * Description: If f is NULL, nothing is done.
 *              Otherwise, the function pointed to by f is called.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;

	f(name);
}
