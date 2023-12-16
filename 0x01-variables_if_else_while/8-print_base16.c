#include <stdio.h>
/**
 * main - Entry
 * Description: Hexadecimal in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char lwc;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (lwc = 'a'; lwc <= 'f'; lwc++)
		putchar(lwc);

	putchar('\n');

	return (0);
}
