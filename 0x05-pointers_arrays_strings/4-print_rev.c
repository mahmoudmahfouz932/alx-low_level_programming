#include "main.h"

/**
*print_rev - Entry
*print_rev prints string in revese
*@s: The pointer used in function
**Return: Always success 0
*/
void print_rev(char *s)
{
	while (*s == '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
