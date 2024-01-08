#include "main.h"

/**
 * print_last_digit - Prints last digit
 * Description: Prints last digit
 * @n: Integer
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int lastdig = n % 10;

	if (lastdig < 0)
	{
		lastdig = lastdig * -1;
	}
	_putchar(lastdig + '0');
	return (lastdig);
}
