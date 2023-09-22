#include "main.h"

/**
* print_number - Prints any integer
*@n: Number to prints
*
* Return: void
*/

void print_number(int n)
{
	int x = 0;
	int y = 0;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n <= 9 && n >= 0)
	{
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 99 && n <= 999)
	{
		_putchar(n / 100 + '0');
		x = n / 10;
		_putchar(x % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 999)
	{
		_putchar(n / 1000 + '0');
		x = n / 100;
		_putchar(x % 10 + '0');
		y = n / 10;
		_putchar(y % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
