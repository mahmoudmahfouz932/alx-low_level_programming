#include "main.h"

/**
*root13 - Entry
*root13 to encrypte array
*@c: The pointer used in function
**Return: char
*/

char *rot13(char *c)
{
	int i = 0;

	for (i = 0; c[i]; i++)
	{
		while ((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122))
		{
			if ((c[i] > 77 && c[i] <= 90) || (c[i] > 109 && c[i] <= 122))
			{
				c[i] = c[i] - 13;
				break;
			}
			else
			{
				c[i] = c[i] + 13;
				break;
			}
		}
	}
}
