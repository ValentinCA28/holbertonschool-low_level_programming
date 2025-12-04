#include <stdio.h>

/**
 * main - prints all arguments, one per line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])

{
	int i; /* compteur de boucle */

	for (i = 0; i < argc; i++) /* parcourt tous les arguments */
	{
		printf("%s\n", argv[i]); /* affiche chaque argument */
	}
	return (0);
}
