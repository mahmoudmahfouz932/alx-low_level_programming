#include "main.h"

/**
*_strlen_recursion - Entry
*_strlen_recursion to print  string length
*@s:pointer array want to print
**Return: void
*/

int _strlen_recursion(char *s)
{
	if (s == '/0')
	{
		return;
	}
	s++;
	return(_strlen_recursion(s) + 1);
}
