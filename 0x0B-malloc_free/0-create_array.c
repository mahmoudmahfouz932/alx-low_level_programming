#include "main.h"
#include <stdlib.h>

/**
  * create_array - Create array
  * @size: size of array
  * @c: array elements
  *
  * Return: char
  */
char *create_array(unsigned int size, char c)
{
	
	char *a;
	unsigned int i ;

	a = malloc(sizeof(char));

	if (size == 0) 
	{
		return (NULL);
	}

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = ; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
