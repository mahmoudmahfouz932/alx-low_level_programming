#include "main.h"
#include <stdlib.h>

/**
  * _calloc - calloc
  * @nmemb: number
  * @size: size
  *
  * Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, n = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;
	p = malloc(n);

	if (p == NULL)
		return (NULL);

	while (i < n)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
