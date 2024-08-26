#include "main.h"

/**
 * print_square - Function that prints square
 * @size: Size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
			for (j = 0; j < size - 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
