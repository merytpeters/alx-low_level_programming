#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @separator: First known argument, separator string
 * @n: Last known argument, number of strings passed
 * @...: A variable number of arguments
 * Return: Strings separated by ,
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(str);
	unsigned int index;
	char *Strn;

	va_start(str, n);

	for (index = 0; index < n; index++)
	{
		Strn = va_arg(str, char *);
		if (index != (n - 1) && separator != NULL)
			printf("%s%s", Strn, separator);

		else
			printf("%s", Strn);

		if (Strn == NULL)
			printf("(nil)");
	}
	printf("\n");
	va_end(str);
}
