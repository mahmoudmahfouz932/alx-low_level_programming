#include "main.h"

/**
*_strchr - Entry
*_strchr to fills memory with a constant byte
*@s:pointer array want to add
*@c:value to be set
**Return: char
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		while (s[i] != '\0')
		{
			if (s[i] == c)
				s = s + i;
				i++;
			i++;
		}
		i++;
	}
	return (s);
}
