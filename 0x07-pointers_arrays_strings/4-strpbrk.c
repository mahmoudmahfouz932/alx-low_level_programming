
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

	for (i = 0; accept[i]; i++)
	{
		for (y = 0; s[y]; y++)
		{
			if (s[y] == accpet[i])
			{
				s[b] += accept[i];
			}
		}
	}
	return (s);
}
