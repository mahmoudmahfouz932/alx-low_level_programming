#include "variadic_functions.h"
/**
  * sum_them_all - sum all of the arrguments
  * @n:argguments
  * Return: int
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
