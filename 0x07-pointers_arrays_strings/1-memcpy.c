#include "main.h"

/**
*_memcpy - Entry
*_memcpy to fills memory with a constant byte
*@dest:pointer array want to add
*@src:value to be set
*@n:number of byte
**Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
