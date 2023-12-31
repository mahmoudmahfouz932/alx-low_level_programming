#include "main.h"
/**
 * *_strncat -Entry point
 * *_strncat to append two Strings
 * @dest: The new array copy
 * @src: The array want to copy
 * @n: number of byte to add from src to dest
 * Return: char*
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int i = 0;

	while (dest[len1])
	{
		len1++;
	}
	for (; i < n && src[i]; i++)
	{
		dest[len1] = src[i];
		len1++;
	}
	dest[len1 + 1 + n] = '\0';
	return (dest);
}
