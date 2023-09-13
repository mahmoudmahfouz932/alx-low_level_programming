#include "main.h"
/**
*print_last_digit -Entry
*to return the last digit number
*@n: The character to be checked
*Return: Always success 0
*/
int print_last_digit(int n)
{
	n = n % 10;
	if ((n % 10) < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
