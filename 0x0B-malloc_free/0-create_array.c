#include "main.h"
#include <stdlib.h>

/**
  * main - Create array
  * @size: size of array
  * @c: array elements
  *
  * Return: char
  */
char *create_array(unsigned int size, char c)
{
	if (size == NULL) 
	{
		return (NULL);
	}

	char *a;

	a = malloc(sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	for (int i = ; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
