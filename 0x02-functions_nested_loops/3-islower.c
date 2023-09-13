#include "main.h"

/**
*_islower -Entry
*_islower to check if lowercase or not
*Return: Always success 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
