#include <stdio.h>
/**
 * main - Entry
 * Description: Three digits combinations
 * Return: 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;
	int n3;

	for (n1 = 0; n1 < 10; n1++)
		for (n2 = n1 + 1; n2 < 10; n2++)
			for (n3 = n2 + 1; n3 < 10; n3++)
			{
				putchar((n1 % 10) + '0');
				putchar((n2 % 10) + '0');
				putchar((n3 % 10) + '0');
				if (n1 < 7)

				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
