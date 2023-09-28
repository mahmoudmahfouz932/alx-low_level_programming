#include "main.h"

/**
*_puts_recursion - Entry
*_puts_recursion to print astring
*@s:pointer array want to print
**Return: void
*/
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	_putchar(s[i]);
	i++;
	_puts_recutsion(char *s);
	
}
