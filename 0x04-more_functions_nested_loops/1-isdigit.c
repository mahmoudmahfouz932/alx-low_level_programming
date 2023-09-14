#include "main.h"

/**
*_isdigit -Entry
*_isdigit to check if is digit or not
*@c: The character to be checked
*Return: Always success 0
*/
int _isdigit(int c)
{
	while (c >= 48 && c <= 57)
	{
		return (1);
	}
	return(0);
}
