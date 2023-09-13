#include "main.h"

/**
*_abs -Entry
*_abs  to return absolut value of integer
*@n: The character to be checked
*Return: Always success 0
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
