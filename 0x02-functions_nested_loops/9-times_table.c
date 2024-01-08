#include "main.h"

/**
 * times_table - 9 times table
 */
void times_table(void)
{
	int n1, n2, mult, mult1, mult2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			mult = n1 * n2;
			mult1 = mult / 10;
			mult2 = mult % 10;
			if (n2 == 0)
			{
				_putchar('0');
			}
			else if (mult < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult2 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mult1 + '0');
				_putchar(mult2 + '0');
			}
		}
		_putchar('\n');
	}
}
