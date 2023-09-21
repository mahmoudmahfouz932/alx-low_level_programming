#include "main.h"

/**
*reverse_array - Entry
*reverse_array to revese array
*@a: The pointer used in function
*@: Thenumber of elements
**Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int rs;

	while (s[i] != '\0')
	{
		i++;
	}
	n = n - 1;
	while (i > n)
	{
		rs = a[n];
		a[n] = a[i];
		a[i] = rs;
		n--;
		i++;
	}
}
