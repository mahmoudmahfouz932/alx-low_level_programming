#include "main.h"
#include <stdio.h>
/**
*print_to_98 -Entry
*print_to_98 to print all natural numbers to 98
*@n: The character to be checked
*Return: void
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
			printf("%d, ", i);
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
		else
		{
			printf("%d", n);
		}
	printf("\n");
	}
}
