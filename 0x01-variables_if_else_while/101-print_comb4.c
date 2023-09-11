#include <stdio.h>
/**
*main -Entry point
*
*Return: Always 0(success)
*/
int main(void)
{
	int i, x, z;

	for (i = 0; i < 9; i++)
	{
		for (x = i + 1; x < 10; x++)
		{
			for (z = x + 1; z < 10; z++)
			{
				putchar((i % 10) + '0');
				putchar((x % 10) + '0');
				putchar((z % 10) + '0');
				if (i == 7 && x == 8)
				{
				continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
