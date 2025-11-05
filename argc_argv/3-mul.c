#include <stdio.h>

/**
 * is_number - checks if string is a valid integer
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

int main(int argc, char *argv[])
{
	int a = conv(argv[1]);
	int b = conv(argv[2]);
	int result = a * b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (!check_num(argv[1]) || !check_num(argv[2]))
	{
		printf("Error\n");
		return (1);
	}



	printf("%d\n", result);
	return (0);

}
