#include <stdio.h>
/**
 *main -Entry point
 *print text without use printf or puts
 *Return: Always 0(success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (0);
}
