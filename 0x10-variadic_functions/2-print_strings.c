#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <strings.h>

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

	va_start(str, n);

	for (index = 0; index < n; index++)
	{
		printf("%s", va_arg(str, char *));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);

		if (str == NULL)
			printf("(nil)");
	}
	printf("\n");
	va_end(str);
}
