#include "main.h"

/**
*rev_string - Entry
*rev_string to revese array
*@s: The pointer used in function
**Return: void
*/
void rev_string(char *s)
{
	int i = 0;
	int z = 0;
	char *rs;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		rs[z] = s[i];
		i--;
		z++;
	}
	s = rs;
}
