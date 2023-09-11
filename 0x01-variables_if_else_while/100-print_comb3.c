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
		for (x = i + 1; x < 9; x++)
		{
			if (i == 8 && x == 9)
			{
				continue;
			}
			putchar((i % 10) + '0');
			putchar((x % 10) + '0');
			putchar(',');
			putchar(' ');
		}
		
	}
	putchar('\n');
	return (0);
}
