#include <stdio.h>

/**
 * main - Entry
 *
 * Description: Prints lowercase alphabets
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lch;

	for (lch = 'a'; lch <= 'z'; lch++)
	{
		putchar(lch);
	}
	putchar('\n');
	return (0);
}
