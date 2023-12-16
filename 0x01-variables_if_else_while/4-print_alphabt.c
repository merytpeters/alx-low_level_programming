#include <stdio.h>

/**
 * main - Entry
 * Description: Prints lowercase alphabets except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lch;

	for (lch = 'a'; lch <= 'z'; lch++)
	{
		if (lch != 'q' && lch != 'e')
			putchar(lch);
	}

	putchar('\n');

	return (0);
}
