#include "main.h"

/**
 * print_numbers - Numbers from 0 to 9
 * Return: 0 (Success)
 */
void print_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		_putchar((num % 10) + '0');
		num++;
	}
	_putchar('\n');
}
