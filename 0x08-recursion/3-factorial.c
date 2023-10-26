#include "main.h"

/**
*factorial - Entry
*factorial - to print  print factorial
*@n:number to caluclate factorial
**Return: int
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
