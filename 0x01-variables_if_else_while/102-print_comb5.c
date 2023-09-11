#include <stdio.h>
/**
*main -Entry point
*
*Return: Always 0(success)
*/
int main(void)
{
	int i, x, z, y;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (z = 0; z <= 9; z++)
			{
				for (y = 0; y < 10; y++)
				{
					if (z == 0 && y == 0)
					{
						continue;
					}
					putchar((i % 10) + '0');
					putchar((x % 10) + '0');
					putchar(' ');
					putchar((z % 10) + '0');
					putchar((y % 10) + '0');
					putchar(',');
					putchar(' ');
					if (z == 9 && y == 9 && i == 9 && x == 9)
					{
						continue;
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
