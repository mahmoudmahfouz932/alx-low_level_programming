#include "main.h"

/**
*print_numbers -Entry
*print_numbers using while loop from 0 to 9
*@c: The character to be checked
**Return: void
*/
void print_numbers(void)
{
	char c;

	while (c >= '0' && c <= '9')
	{
		_putchar(c);
	}
}
