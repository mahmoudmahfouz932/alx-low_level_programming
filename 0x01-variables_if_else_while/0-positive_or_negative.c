#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%f is positive\n", n);
	}
	else if (n < 0)
	{
		Printf("%f is negative\n", n);
	}
	else
	{
		printf("%f is zero\n", n);
	}
	return (0);
}
