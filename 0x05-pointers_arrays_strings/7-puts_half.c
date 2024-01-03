#include "main.h"
/**
 * puts_half - Prints half of a string
 * if odd length, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, wrd;

	wrd = 0;

	for (a = 0; str[a] != '\0'; a++)
		wrd++;

	n = (wrd / 2);

	if ((wrd % 2) == 1)
		n = ((wrd + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
