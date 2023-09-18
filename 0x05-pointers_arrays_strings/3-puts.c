#include "main.h"

/**
*_puts -Entry
*_puts to print string followed by new line
*@str: The pointer used in function
**Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
