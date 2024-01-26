#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all variable arguments (known and unknown)
 * @n: First known argument
 * @...: A variable number of arguments
 * Return: Sum of all known and unknown integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list sumAll;

	va_start(sumAll, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(sumAll, int);

	va_end(sumAll);
	return (sum);
}
