#include <stdio.h>
/**
*main -Entry point
*
*Return: Always 0(success)
*/
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 9)
		{
			putchar(c + '0');
			continue;
		}
		putchar(c + '0');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
