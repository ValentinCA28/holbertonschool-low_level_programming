#include "main.h"
#include <unistd.h>

void jack_bauer(void)

{
	char buffer [6];
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for(b = 0; b < 60; b++)
		{
			buffer[0] = ('0' + (a / 10));
			buffer[1] = ('0' + (a % 10));
			buffer[2] = (':');
			buffer[3] = ('0' + (b / 10));
			buffer[4] = ('0' + (b % 10));
			buffer[5] = ('\n');
			write(1, buffer, 6);
		}
	}
}
