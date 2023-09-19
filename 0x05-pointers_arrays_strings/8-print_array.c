#include "main.h"
#include <stdio.h>

/**
*print_print - Entry
*print_array prints string in revese
*@a , b: The pointers used in function
**Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i >= n)
	{
		printf("%d, ", a[i])
		i++;
	}
}
