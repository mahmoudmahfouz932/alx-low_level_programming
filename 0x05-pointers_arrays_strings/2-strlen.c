#include "main.h"

/**
*_strlen -Entry
*_strlen to return leghth
*@s: The pointer used in function
**Return: Always success 0
*/
int _strlen(char *s)
{
	int i = 0;

	while  (i <= *s)
	{
		i++;
	}
	return (i);
}
