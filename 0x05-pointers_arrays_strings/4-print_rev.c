#include "main.h"

/**
*print_rev - Entry
*print_rev prints string in revese
*@s: The pointer used in function
**Return: Always success 0
*/
void print_rev(char *s)
{ 
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
