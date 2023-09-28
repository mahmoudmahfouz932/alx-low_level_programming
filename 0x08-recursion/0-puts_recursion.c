#include "main.h"

/**
*_puts_recursion - Entry
*_puts_recursion to print astring
*@s:pointer array want to print
**Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
		return;
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
