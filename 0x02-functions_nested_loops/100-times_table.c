#include "main.h"

/**
* print_number - Prints an integer using _putchar
* @num: The integer to print
*/
void print_number(int num)
{
	if (num >= 100)
	{
		_putchar((num / 100) + '0');
		_putchar(((num / 10) % 10) + '0');
	}
	else if (num >= 10)
	{
		_putchar((num / 10) + '0');
	}
	_putchar((num % 10) + '0');
}

/**
* print_times_table - Prints n times table starting from 0
* @n: number variable
*/
void print_times_table(int n)
{
	int i, j;
	int prod;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0;  i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod =  i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (prod < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (prod < 100)
				{
					_putchar(' ');
				}
			}
			print_number(prod);
		}
		_putchar('\n');
	}
}
