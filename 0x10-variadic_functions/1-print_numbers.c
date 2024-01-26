#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers with a separator
 * @separator: First known argument, string
 * @n: Last known argument, number of integers passed
 * @...: A variable number of arguments
 * Return: Integers separated by ,
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(numbers);
	unsigned int index;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
	{
		if (index != (n - 1) && separator != NULL)
			printf("%d%s", va_arg(numbers, int), separator);

		else
			printf("%d", va_arg(numbers, int));
	}
	printf("\n");
	va_end(numbers);
}
