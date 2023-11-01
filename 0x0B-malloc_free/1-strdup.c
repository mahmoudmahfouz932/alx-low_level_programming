#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Create array
  * @str: array elements
  *
  * Return: char
  */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int c;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;

	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
		s[c] = str[c];
	s[i] = '\0';
	return (s);
}
