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
	int z = 0;
	int x = 0;
	int y = 0;
	char *cpy;

	while (src[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i > z)
	{
		cpy = src[i];
		src[i] = src[z];
		src[z] = cpy;
		i--;
		z++;
	}
	while (cpy[x] != '\0')
        {
                x++;
        }
        x = x - 1;
        while (x > y)
        {
                dest = cpy[x];
                cpy[x] = cpy[y];
                cpy[y] = dest;
                x--;
                y++;
        }

}
