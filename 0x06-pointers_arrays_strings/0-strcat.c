#include "main.h"
/**
 * *_strcat -Entry point
 * *_strcat to append two Strings
 * @dest: The new array copy
 * @src: The array want to copy
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	dest[len1 + len2] = '\0';
	for (i = 0; len1 < len1 + len2; i++)
	{
		dest[len1] = src[i];
		len1++;
	}
	return (dest);
}
