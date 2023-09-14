#include "main.h"

/**
*print_squareprint_square -Entry
*print_square using for loop to print square of #
@size: The size of the squares
**Return: void
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (size = size; size > 0; size++)
		{
			_putchar(35);
			for (size = size; size > 0; size++)
			{
				_putchar(35);
			}
		}
	}
	_putchar('\n');
}	
