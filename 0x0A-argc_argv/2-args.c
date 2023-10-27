#include <stdio.h>
#include "main.h"
/**
  * main - Prints its name
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	(void) argc;
	for (int i = 1; i >= argc; i++)
	{
		printf("%s\n", argv[i])
	}
}
