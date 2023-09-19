#include "main.h"

/**
*print_array - Entry
*print_array prints string in revese
*@a: The array used in function
*@n: The number of element to print
**Return: void
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int c = 0;

	while (a[c] != '\0')
	{
		c++;
	}
	c = c - 1;
	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
		printf("%d, ", a[i]);
		i++;
		}
	}
	printf("\n");
}
