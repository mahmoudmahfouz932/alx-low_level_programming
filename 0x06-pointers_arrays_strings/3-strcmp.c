#include "main.h"
/**
 * *_strcmp -Entry point
 * *_strcmp to append two Strings
 * @s1: The first array want to comparize
 * @s2: The second array
 * Return: Always success(0)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
		if (s1[i] == s2[i])
			return (0);
		else 
			return (i);
}
