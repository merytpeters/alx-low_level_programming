#include "main.h"

/**
 * is_prime_number - Checks for prime numbers
 * @n: Integer
 * Return: 1 if its a prime number , 0 if not
 */
int is_prime_number(int n)
{
	int i = n / n;

	if (i != 1)
	{
		return (n - 1);
	}
	if (i > 1)
	{
		return (0);
	}
	else if (i < 1)
	{
		return (0);
	}
	else
		return (1);
}

