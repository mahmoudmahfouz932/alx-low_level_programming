
#include "main.h"

/**
*_strpbrk - Entry
*_strpbrk to encrypte an array
*@s: The first array
*@accept: the second array
**Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int y;

	while (accept[i])
	{
		y = 0;
		while (s[y])
		{
			if (s[y] == accept[i])
			{
				s += i;
				return (s);
			}
			y++;
		}
		i++;
	}
	return ('\0');
}
