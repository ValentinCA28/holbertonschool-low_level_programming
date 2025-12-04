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
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i = 0; /* compteur de boucle */
	int sum = 0; /* somme des nombres */

	if (argc == 1) /* aucun argument fourni */
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++) /* parcourt tous les arguments */
	{
		if (!check_num(argv[i])) /* verifie si c'est un nombre valide */
		{
			printf("Error\n");
			return (1);
		}
		sum += conv(argv[i]); /* ajoute le nombre a la somme */
	}
	printf("%d\n", sum); /* affiche le total */
	return (0);

}
