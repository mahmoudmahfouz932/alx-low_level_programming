#include "main.h"

/**
*print_line -Entry
*print_line using while loop to print n of lines
*@n: The character to be checked
**Return: void
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
