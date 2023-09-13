#include "main.h"

/**
*jack_bauer -Entry
*jack_bauer using for loop to print every min in the day
**Return: void
*/
void jack_bauer(void)
{	
	float i;
	float x;

	for (i = 0; i <= 23; i++)
	{
		for (x = 0; x <= 59; x++)
		{
			_putchar(i + '0');
			_putchar(':');
			_putchar(x + '0');
			_putchar('\n');
		}
	}
}
