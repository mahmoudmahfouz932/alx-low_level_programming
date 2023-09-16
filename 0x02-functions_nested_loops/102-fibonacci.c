#include <stdio.h>

/**
  * main - Prints the first 52 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int i;
	long x = 1, z = 2;

	for (i = 0; i < 50; ++i)
	{
		if (i == 0)
		{
			printf("%ld", x);
		}
		else if (i == 1)
		{
			printf(", %ld", z);
		}
		else
		{
			z = z + x;
			x = z - x;
			printf(", %ld", z);
		}
	}

	printf("\n");
	return (0);
}
