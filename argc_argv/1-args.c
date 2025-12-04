#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of arguments (unused)
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* ignore argv car non utilise */
	printf("%d\n", argc - 1); /* affiche nombre d'args sans le nom du prog */
return (0);
}
