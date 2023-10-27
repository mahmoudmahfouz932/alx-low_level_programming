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

	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
