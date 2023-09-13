#include "main.h"

/**
*_isalpha -Entry
*_isalpha to check if lowercase or not
*@c: The character to be checked
*Return: Always success 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
