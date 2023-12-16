#include <stdio.h>
/**
 * main - Entry
 * Description: Prints two digits combinations without duplication
 * Return: 0 (Success)
 */
int main(void)
{
	int C1;
	int C2;

	for (C1 = 0; C1 < 10; C1++)
		for (C2 = C1 + 1; C2 < 10; C2++)
		{
			putchar((C1 % 10) + '0');
			putchar((C2 % 10) + '0');
			if (C1 < 8)

			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
