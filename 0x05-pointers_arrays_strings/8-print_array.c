#include "main.h"
#include <stdio.h>

/**
*print_array - Entry
*print_array prints string in revese
*@a: The pointers used in function
*@b: The pointers used in function
**Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
