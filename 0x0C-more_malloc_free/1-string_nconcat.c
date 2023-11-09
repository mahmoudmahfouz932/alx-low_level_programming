#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - nanocat
  * @s1: s1
  * @s2: s2
  * @n: numbers
  *
  * Return: char
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, h = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (n >= k)
		h = i + k;
	else
		h = i + n;

	str = malloc(sizeof(char) * h + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (j < h)
	{
		if (j <= i)
			str[j] = s1[j];

		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
