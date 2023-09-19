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
	int c ;

	c = n - 1;
	while (i < n)
	{
		if (i == c)
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
