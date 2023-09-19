#include "main.h"

/**
*puts2 -Entry
*puts2 to print string followed by new line
*@str: The pointer used in function
**Return: void
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
