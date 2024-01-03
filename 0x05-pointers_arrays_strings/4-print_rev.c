#include "main.h"

/**
 * print_rev - Reverse strings
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int wrd = 0;
	int p;

	while (*s != '\0')
	{
		wrd++;
		s++;
	}
	s--;
	for (p = wrd; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
