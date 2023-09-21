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
	int len1 = 0, len2 = 0, len, z;

	while (s1[eln1])
	{
		len1++;
	}
	while (s2[eln2])
        {
                len2++;
        }
	if (len1 >= len2)
	{
		len = len1;
	}
	else
		len = len2
	for (i = 0; i < len; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			z = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (z);
}
