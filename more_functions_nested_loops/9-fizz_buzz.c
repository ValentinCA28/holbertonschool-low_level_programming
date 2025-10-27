#include <stdio.h>

/**
 * main - Prints numbers 1 to 100 following Fizz-Buzz rules
 *
 * Description: For multiples of 3, prints Fizz instead of the number
 * For multiples of 5, prints Buzz instead of the number
 * For multiples of both 3 and 5, prints FizzBuzz
 * Each number or word is separated by a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}

		if (x < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
