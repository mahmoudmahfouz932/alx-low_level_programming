#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always (Success)
  */
int main(void)
{
	int i;
	int x = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			x = x + i;
		}
	}

	printf("%d\n", x);
	return (0);
}
