#include <stdio.h>
/**
	* main - Entry point
	*
* Description: print combinaison single digit
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
	int c;
	for (c = '0' ; c < '9' ; c++)
	{
			if (c != '9')		
			{
				putchar(',');
			}
	}
	putchar(c);
	putchar('\n');
	return (0);
}
