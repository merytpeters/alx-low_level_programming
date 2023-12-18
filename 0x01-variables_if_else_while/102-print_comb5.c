#include <stdio.h>
/**
 * main - Entry
 * Description: Prints two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 9; n1++)
		for (n2 = 0; n2 <= 8; n2++)
		{
			putchar((n1 % 10) + '0');
			putchar((n2 % 10) + '0');
			putchar(' ');
			putchar((n1 % 10) + '0');
			putchar((n2 % 10) + '1');
			if (!(n1 == 9 && n2 == 8))

			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
