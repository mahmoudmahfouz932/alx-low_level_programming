#include <stdio.h>
#include "main.h"
/**
  * main - Prints the numbers from 00 to 99
  *
  * Return: Always (Success)
  */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 5 == 0) &&(i % 3 == 0))
		{
			printf("FuzzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
