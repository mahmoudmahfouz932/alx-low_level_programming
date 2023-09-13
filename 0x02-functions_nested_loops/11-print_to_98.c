#include "main.h"
/**
*print_to_98 -Entry
*print_to_98 to print all natural numbers to 98
*@n: The character to be checked
*Return: void
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n + '0');
			_putchar(44);
			_putchar('\b');
		}
	}
	else
	{
		_putchar(n);
	}
	_putchar('\n');
}
