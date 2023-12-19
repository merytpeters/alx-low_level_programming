#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabets 10x
 *
 */
void print_alphabet_x10(void)
{
	int x;
	char lca;

	for (x = 0; x <= 9; x++)
	{
		for (lca = 'a'; lca <= 'z'; lca++)
			_putchar(lca);
		_putchar('\n');
	}
}
