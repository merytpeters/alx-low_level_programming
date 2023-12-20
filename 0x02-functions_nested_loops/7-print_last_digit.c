#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @i: Last digit
 * Return: Last digit
 */
int print_last_digit(int i)
{
	int j;

	for (j = i % 10; j++;)
		_putchar(j);
	return (j);
}
