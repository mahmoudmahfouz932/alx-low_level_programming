#include "main.h"

/**
*print_sign -Entry
*print_sign  to check if postive or not
*@n: The character to be checked
*Return: Always success 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
