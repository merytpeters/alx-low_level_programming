#include "main.h"

/**
 * factorial - Returns the factorial of any given number
 * @n: Integer to input
 * Return: The factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
