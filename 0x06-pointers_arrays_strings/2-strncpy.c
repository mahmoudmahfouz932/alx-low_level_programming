#include "main.h"
/**
 * *_strncpy -Entry point
 * *_strncpy to append two Strings
 * @dest: The new array copy
 * @src: The array want to copy
 * @n: number of byte to add from src to dest
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}
