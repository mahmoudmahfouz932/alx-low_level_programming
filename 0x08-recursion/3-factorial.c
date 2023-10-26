#include "main.h"

/**
*factorial - Entry
*factorial to print  print factorial
*@s:pointer array want to print
**Return: void
*/
int factorial(int n)
{
	if (n == 1)
		{
			return (1);
		}
	return (n * factorial(n - 1));
}
