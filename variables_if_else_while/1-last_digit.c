#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Generates a random number and prints whether it is
 * positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
{
printf("Last digit of", n, "is", lastDigit)
}
if (lastDigit > 5)
{
printf("is greater than 5")
}
{
if (lastDigit == 0)
printf("and is 0")
}
{
if (lastDigit < 5)
printf("and is less than 6 and not 0")
}
return (0);
}

