#include <stdio.h>
/**
*main -Entry point
*
*Return: Always 0(success)
*/
int main(void)
{
	int i, x, z, y;

	for (i = 0; i < 9; i++)
	{
		for (x = 0; x < 9; x++)
		{
			for (z = 0; z < 9; z++)
			{
				for (y = z + 1; y < 10; y++)
				{
					putchar(i + '0');
					putchar(x + '0');
					putchar(' ');
					putchar(z + '0');
					putchar((y % 10) + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
