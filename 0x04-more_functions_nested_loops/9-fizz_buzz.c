#include <stdio.h>
/**
  * main - Prints the numbers from 00 to 99
  *
  * Return: Always (Success)
  */

int main(void)
{
	int i;

	for (i = 0; i <= 100 i++)
	{
		if ((i % 3) == 0)
		{
			printf(" Fuzz");
		}
		if ((i % 5) == 0)
		{
			printf(" Buzz");
		}
		if ((i % 15) == 0)
		{
			printif(" FizzBuzz");
		}
		printf("%d ", i);
	}
}
