#include "main.h"

/**
**_strcpy - Entry
**_strcpy to revese array
*@*dest: The new array copy
*@*src: The array want to copy
**Return: void
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return (dest);
}
