#include "main.h"

/**
*_puts -Entry
*_puts to print string followed by new line
*@str: The pointer used in function
**Return: void
*/
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		str++;
		i = i + 1;
	}
	_putchar('\n');
}
