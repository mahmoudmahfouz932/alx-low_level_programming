#include "main.h"

/**
*more_numbers -Entry
*more_numbers using while loop from 0 to 9
**Return: void
*/
void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c >= 0 && c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
	}
	_putchar('\n');
}
