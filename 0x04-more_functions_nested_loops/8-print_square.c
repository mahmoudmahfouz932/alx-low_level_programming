#include "main.h"

/**
*print_square -Entry
*print_square using for loop to print square of #
*@size: The size of the squares
**Return: void
*/
void print_square(int size)
{
	int h, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 0; size > h; h++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
