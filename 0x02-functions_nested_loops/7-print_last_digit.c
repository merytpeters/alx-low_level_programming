#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @i: Last digit
 * Return: 0 (Success)
 */
int print_last_digit(int i)
{
	int j;

	for (j = i % 10)
		_putchar(j);
	return (0);
}
