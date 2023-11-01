#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int z = 0;
	int x = 0;
	int c;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[z])
		z++;
	s = malloc((sizeof(char) * (i + z)) + 1);
	if (s == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
		s[c] = s1[c];
	c++;
	while (c < (i + z))
	{
		s[c] = s2[x];
		c++;
		x++;
	}
	s[i + z] = '\0';
	return (s);
}
