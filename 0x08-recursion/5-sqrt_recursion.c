#include "main.h"

/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: Integer
 * Return: Natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (i * i > n)
		return (-1);
	if (n == i * i)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
