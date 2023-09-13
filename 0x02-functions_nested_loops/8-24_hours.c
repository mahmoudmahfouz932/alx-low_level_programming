#include "main.h"

/**
*jack_bauer -Entry
*jack_bauer using for loop to print every min in the day
**Return: void
*/
void jack_bauer(void)
{
	int i, x, y, z;

	for (i = 0; i <= 2; i++)
	{
		for (x = 0; x <= 9)
		{
			if ((i <= 1 && x <= 9) || (i == 2 && x <= 3))
			{
				for (y = 0; y <= 5; x++)
				{
					for (z = 0; z <= 9; z++)
					{
						_putchar(i + '0');
						_putchar(x + '0');
						_putchar(':');
						_putchar(y + '0');
						_putchar(z + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
