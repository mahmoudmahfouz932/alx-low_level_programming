#include "main.h"
#include <stdio.h>

/**
 * check_prime - Check if number is prime
 * @n: the number to be checked
 * @z: the iteration times
 * @is_prime_number: function to check
 * @n:the number to check
 * Return: 1 for prime or 0 composite
 */
int check_prime(int n, int z)
{
	if (n <= 1)
		return (0);

	if (n % z == 0 && z > 1)
		return (0);

	if ((n / z) < z)
		return (1);

	return (check_prime(n, z + 1));
}

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
