#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: show the last digit of a randomly generated number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastDigit;

/* Initialiser le générateur de nombres aléatoires */
srand(time(0));
/* Générer un nombre aléatoire */
n = rand() - RAND_MAX / 2;
/* Obtenir le dernier chiffre */
lastDigit = n % 10;
{
printf("Last digit of %d is %d ", n, lastDigit);
}
/* Vérifier si le dernier chiffre est supérieur à 5 */
if (lastDigit > 5)
{
printf("and is greater than 5\n");
}
/* Vérifier si le dernier chiffre est égal à 0 */
else if (lastDigit == 0)
{
printf("and is 0\n");
}
/* Le dernier chiffre est inférieur à 6 et différent de 0 */
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
