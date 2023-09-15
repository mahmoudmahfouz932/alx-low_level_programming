#include "main.h"

/**
*print_diagonal -Entry
*print_diagonal using while loop to print n of lines
*@n: The character to be checked
**Return: void
*/
void print_diagonal(int n)
{
	int z;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (z = 0; z < i; z++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
