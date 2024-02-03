#include "main.h"

/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: Integer
 * Return: Natural square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	i = _sqrt_recursion(n);

	if (n == 0)
		return (1);
	else if (n == i * i && i == n / i)
	{
		if (i < 0)
			return (_sqrt_recursion(n) * -1);
		else if (i == 0)
			return (1);
		else
			return (_sqrt_recursion(n));
	}
	else
		return (0);
}
