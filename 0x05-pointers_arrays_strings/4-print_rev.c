#include "main.h"

/**
*print_rev - Entry
*print_rev prints string in revese
*@s: The pointer used in function
**Return: Always success 0
*/
void print_rev(char *s)
{
	char ptr[];
	int i = 0;

	while (*s != '\0')
	{
		ptr[i];
		s++;
		i++;
	}
	while (i >= s)
	{
		_putchar(ptr[i--]);
	}
	_putchar('\n');
}
