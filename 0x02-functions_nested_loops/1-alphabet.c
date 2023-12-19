#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 */
void print_alphabet(void)
{
	int lca;

	lca = 'a';
	while (lca <= 'z')
	{
		_putchar(lca);
		lca++;
	}
	_putchar('\n');
}
