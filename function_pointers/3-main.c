#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - simple calculator
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, or error code
 */
int main(int argc, char *argv[])
{
    int a, b, result;
    int (*operation)(int, int);

    /* Vérification du nombre exact d'arguments */
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    /* Récupération et conversion des opérandes */
    a = atoi(argv[1]);
    b = atoi(argv[3]);

    /* Récupération du pointeur vers la bonne fonction */
    operation = get_op_func(argv[2]);

    /* Vérification que l'opérateur est valide */
    if (operation == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    /* Vérification de la division/modulo par zéro */
    if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
    {
        printf("Error\n");
        exit(100);
    }

    /* Exécution de l'opération et affichage du résultat */
    result = operation(a, b);
    printf("%d\n", result);

    return (0);
}
