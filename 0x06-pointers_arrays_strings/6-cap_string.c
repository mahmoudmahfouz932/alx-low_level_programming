#include "main.h"

/**
*cap_string -Entry
*cap_string to cap every letter
*@c: The array want to cap
*Return: char
*/
char *cap_string(char *c)
{
	int i = 0;

	for (i = 0; c[i]; i++)
	{
		if (c[i] == 32 || c[i] == 9 || c[i] == 10 || c[i] == 44 || c[i] == 59 || c[i] == 46 || c[i] == 33 || c[i] == 63 || c[i] == 34 || c[i] == 40 || c[i] == 41 || c[i] == 123 || c[i] == 125)
		{i++
			if (c[i] >= 92 && c[i] <= 122)
			{
				c[i] = c[i] - 32;
			}
			c[i] = c[i];
		}
		c[i] = c[i];
	}
	return (c);
}
