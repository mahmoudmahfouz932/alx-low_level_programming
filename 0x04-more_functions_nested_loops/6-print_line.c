#include "main.h"

/**
*print_line -Entry
*print_line using while loop to print n of lines
*@n: The character to be checked
**Return: void
*/
void print_line(int n)
{
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
