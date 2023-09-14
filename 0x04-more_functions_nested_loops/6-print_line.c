#include "main.h"

/**
*print_line -Entry
*print_line using while loop to print n of lines
*@n: The character to be checked
**Return: void
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n++;
	}
}
