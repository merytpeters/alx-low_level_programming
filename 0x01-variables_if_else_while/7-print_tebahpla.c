#include <stdio.h>

/**
 * main - Entry
 * Description: Prints lowercase in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lwc;

	for (lwc = 'z'; lwc >= 'a'; lwc--)
		putchar(lwc);

	putchar('\n');

	return (0);
}
