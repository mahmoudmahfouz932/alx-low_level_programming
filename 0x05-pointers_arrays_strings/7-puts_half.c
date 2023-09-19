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

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
