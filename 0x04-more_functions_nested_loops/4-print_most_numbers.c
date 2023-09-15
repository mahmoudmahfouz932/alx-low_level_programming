#include "main.h"

/**
*print_most_numbers -Entry
*print_most_numbers using while loop from 0 to 9
*Return: void
*/
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c >= '0' && c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
