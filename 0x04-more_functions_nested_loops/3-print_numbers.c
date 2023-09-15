#include "main.h"

/**
*print_numbers -Entry
*print_numbers using while loop from 0 to 9
**Return: void
*/
void print_numbers(void)
{
	int i = 0;

	while (i >= 0 && i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
