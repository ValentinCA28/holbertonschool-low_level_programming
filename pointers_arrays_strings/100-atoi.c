#include "main.h"
#include <limits.h>
#include <stdio.h>


int _atoi(char *s)
{
	int i = 0;
	int signe = 1;
	unsigned int temp = 0;


			while (s[i] == ' ')
			{
				i++;
			}
			while (s[i] == '-' || s[i] == '+')
			{
				if(s[i] == '-')
				signe = -1;
				i++;
			}
			while (s[i] >= '0' && s[i] <= '9')
				{
				if (temp > (unsigned int)INT_MAX / 10 || (temp == (unsigned int)INT_MAX / 10 && (s[i] - '0') > (INT_MAX % 10)))
					{
    				return (signe == 1 ? INT_MAX : INT_MIN);
					}
					temp = temp * 10 + (s[i] - '0');
					i++;
				}

		return signe * (int)temp;
}
