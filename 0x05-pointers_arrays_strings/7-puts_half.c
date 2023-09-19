#include "main.h"

/**
*puts_half -Entry
*puts_half to print string followed by new line
*@str: The pointer used in function
**Return: void
*/
void puts_half(char *str)
{
	int i = 0;
	int z;

	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	z = (i / 2) + 1;
	while (str[z] != '\0')
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
