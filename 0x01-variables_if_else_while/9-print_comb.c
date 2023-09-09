#include <stdio.h>
/**
*main -Entry point
*
*Return: Always 0(success)
*/
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '9')
		{
			putchar(c);
			continue;
		}
		c = c + ' ';
		putchar(c);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
