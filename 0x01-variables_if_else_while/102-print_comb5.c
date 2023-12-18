#include <stdio.h>
/**
 * main - Entry
 * Description: Prints two 2-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;
	int n3;
	int n4;

	for (n1 = 0; n1 <= 9; n1++)
		for (n2 = 0; n2 <= 8; n2++)
		{
			for (n3 = 0; n3 <= 9; n3++)
			for (n4 = 0; n4 <= 8; n4++)
			{
				putchar((n1 % 10) + '0');
				putchar((n2 % 10) + '0');
				putchar(' ');
				putchar((n3 % 10) + '0');
				putchar((n4 % 10) + '1');
				if (!(n1 == 9 && n2 == 8 && n3 == 9 && n4 == 8))

				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
