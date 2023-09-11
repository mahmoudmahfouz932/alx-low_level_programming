#include <stdio.h>
/**
*main -Entry point
*
*Return: Always 0(success)
*/
int main(void)
{
	int i, x;

	for (i = 0; i < 9; i++)
	{
		for (x = 1; x < 9; x++)
		{
			if (i == 9 && x == 9)
			{
				continue;
			}
			putchar(i + '0');
			putchar(x + '0');
			putchar(',');
		}
		
	}
	putchar('\n');
	return (0);
}
