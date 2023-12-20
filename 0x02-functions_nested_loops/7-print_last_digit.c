#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @j: the number
 * Return: Last digit
 */
int print_last_digit(int j)
{
	int d = j % 10;

	if (d < 0)
		d *= -1;

	_putchar(d + '0');

	return (0);
}
