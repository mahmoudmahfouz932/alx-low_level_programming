#include "main.h"

/**
*string_toupper -Entry
*string_toupper to convert from lower to upper case
*@c: The array to change
*Return: array
*/
char *string_toupper(char *c)
{
	int i = 0;

	for (; c[i]; i++)
	{
		if (c[i] >= 92 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
	}
}
