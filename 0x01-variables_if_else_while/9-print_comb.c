#include <stdio.h>
/**
 * main - Entry
 * Description: Print combinations
 * Return: 0 (Success)
 */
int main(void)
{
	int C1;

	for (C1 = 0; C1 < 10; C1++)
	{
		putchar((C1 % 10) + '0');
		if (C1 < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
