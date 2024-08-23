#include "main.h"

/**
 * more_numbers - Prints 0 - 14 ten times
 */
void more_numbers(void)
{
	int num, i, count = 10;

	for (i = 0; i < count; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
