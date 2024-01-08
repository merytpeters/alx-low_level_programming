#include "main.h"

/**
 * times_table - 9 times table
 */
void times_table(void)
{
	int n1, n2;

	int n3 = n1 * n2;
	{
		for (n1 = 0; n1 <= 9; n1++)
		{
			for (n2 = 0; n2 <= 9; n2++)
			{
				_putchar((n3 % 10) + '0');

				if (n2 == 0)
				{
					_putchar('0');
				}
				else if (n3 / 10 == 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
				if (n2 != 9)
				{
					_putchar(',');
				}
				else
				{
					_putchar('\n');
				}
			}
		}
	}
}
