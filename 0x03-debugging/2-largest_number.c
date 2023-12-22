#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @b: first integer
 * @a: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int b, int a, int c)
{
	int largest;

	if (a > b && b > c)
	{
		return (a);
	}
	else if (b > a && a > c)
	{
		return (b);
	}
	else
	{
		return (c);
	}

	return (largest);
}
