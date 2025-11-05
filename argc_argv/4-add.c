#include <stdio.h>

/**
 * check_num - checks if string is a valid integer
 * @str: input string
 * Return: 1 if number, 0 otherwise
 */
int check_num(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * conv - converts string to integer
 * @str: input string
 * Return: integer value
 */
int conv(char *str)
{
	int result = 0;
	int signe = 1;

	if (*str == '-')
	{
		signe = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (signe * result);
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
	int i = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!check_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += conv(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
