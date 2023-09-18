#include "main.h"

/**
*print_rev strlen -Entry
*print_rev print string in revese
*@s: The pointer used in function
**Return: Always success 0
*/
void print_rev(char *s)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n');
}
