#include "main.h"

/**
*_isupper -Entry
*_isupper to check if uppercase or not
*@c: The character to be checked
*Return: Always success 0
*/
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
