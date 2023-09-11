#include <stdio.h>
/**
*main -Entry point
*
*Return: Always 0(success)
*/
int main(void)
{
	int i, x, z, y;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (i == 9 && x == 9)
			{
				continue;
			}
			for (z = 0; z < 10; z++)
			{
				for (y = 0; y < 10; y++)
				{
					if (y == 0 && z == 0)
					{
						y = z + 1;
						continue;
					}
					putchar((i % 10) + '0');
					putchar((x % 10) + '0');
					putchar(' ');
					putchar((z % 10) + '0');
					putchar((y % 10) + '0');
					putchar(',');
					putchar(' ');
					if (z == 9 && y == 9)
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
