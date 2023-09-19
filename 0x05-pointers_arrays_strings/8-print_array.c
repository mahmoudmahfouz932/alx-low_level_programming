#include "main.h"
#include <stdio.h>

/**
*print_array - Entry
*print_array prints string in revese
*@a: The array used in function
*@n: The number of element to print
**Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;
	int c;

	c = n - 1;
	for (i = 0; i <= c ; i++)
	{
		if (i == c)
		{
			printf("%d", a[c]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
