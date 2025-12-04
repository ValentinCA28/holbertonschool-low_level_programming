#include <stdio.h>

/**
 * check_num - checks if string is a valid integer
 * @str: input string
 * Return: 1 if number, 0 otherwise
 */
int check_num(char *str)
{
	if (*str == '\0') /* chaine vide */
	{
		return (0);
	}
	if (*str == '-' || *str == '+') /* gere le signe */
	{
		str++;
	}
	while (*str) /* parcourt chaque caractere */
	{
		if (*str < '0' || *str > '9') /* verifie si c'est un chiffre */
		{
			return (0);
		}
		str++;
	}
	return (1); /* c'est un nombre valide */
}
/**
 * conv - converts string to integer
 * @str: input string
 * Return: integer value
 */
int conv(char *str)
{
	int result = 0; /* resultat de la conversion */
	int signe = 1; /* signe du nombre (1 ou -1) */

	if (*str == '-') /* nombre negatif */
	{
		signe = -1;
		str++;
	}
	else if (*str == '+') /* signe + explicite */
	{
		str++;
	}
	while (*str >= '0' && *str <= '9') /* convertit chaque chiffre */
	{
		result = result * 10 + (*str - '0'); /* construit le nombre */
		str++;
	}
	return (signe * result); /* applique le signe */
}

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int a, b, result; /* operandes et resultat */

	if (argc != 3) /* verifie qu'il y a 2 arguments */
	{
		printf("Error\n");
		return (1);
	}

	if (!check_num(argv[1]) || !check_num(argv[2])) /* valide les nombres */
	{
		printf("Error\n");
		return (1);
	}

	a = conv(argv[1]); /* convertit premier argument */
	b = conv(argv[2]); /* convertit deuxieme argument */
	result = a * b; /* multiplie */

	printf("%d\n", result); /* affiche le resultat */
	return (0);

}
