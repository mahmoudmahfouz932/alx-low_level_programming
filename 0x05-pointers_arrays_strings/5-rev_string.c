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
	int rs;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i > z)
	{
		rs = s[i];
		s[i] = s[z];
		s[z] = rs;
		i--;
		z++;
	}
}
