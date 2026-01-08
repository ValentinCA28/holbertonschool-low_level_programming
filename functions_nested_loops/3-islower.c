#include "main.h"
/**
* _islower - checks for lowercase character
* @c: The character to check
*
* Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)

{
/* Vérifier si c est entre 'a' et 'z' */
if (c >= 'a' && c <= 'z')

	return (1); /* C'est une minuscule */

else

	return (0); /* Ce n'est pas une minuscule */

}
