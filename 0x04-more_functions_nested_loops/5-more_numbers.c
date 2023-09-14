#include "main.h"

/**
*more_numbers -Entry
*more_numbers using while loop from 0 to 9
*@c: The character to be checked
**Return: void
*/
void more_numbers(void)
{
	char c = '0';
	int i = 0;

	while (i <= 9)
	{
		i++;
		while (c >= '0' && c <= '14')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
