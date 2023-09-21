#include "main.h"

/**
*reverse_array - Entry
*reverse_array to revese array
*@a: The pointer used in function
*@n: Thenumber of elements
**Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int z = 0;
	int rs;

	while (i < n)
	{
		i++;
	}
	i--;
	while (z < i / 2 )
	{
		rs = a[i];
		a[i] = a[z];
		a[z] = rs;
		i--;
		z++;
	}
}
