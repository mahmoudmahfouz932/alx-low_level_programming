#include "main.h"

/**
*more_numbers -Entry
*more_numbers using while loop from 0 to 9
**Return: void
*/
void more_numbers(void)
{
	int c = 0;
	int i = 0;

	while (i <= 9)
	{
		while (c >= 0 && c <= 14)
		{
			_putchar(c + '0');
			c++;
		}
		i++;
	}
	_putchar('\n');
}
