#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints name
 * @name: Pointer to name
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
