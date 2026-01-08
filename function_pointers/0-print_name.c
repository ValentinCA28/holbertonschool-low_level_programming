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
	/* Si name ou f est NULL, ne rien faire */
	if (name == NULL && f == NULL)
		return;

	/* Appeler la fonction pointée par f avec name comme argument */
	f(name);
}
