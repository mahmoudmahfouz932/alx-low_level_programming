#include "main.h"

/**
*leet - Entry
*leet to encrypte an array
*@c: The array want to encrypted
**Return: char
*/

char *leet(char *c)
{
	int i = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i]; i++)
	{

		for (b = 0; b < l; b++)
		{
			if (c[i] == r[b] || c[i] - 32 == r[b])
			{
				c[i] = n[b];
			}
		}
	}

	return (c);
}
