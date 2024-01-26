#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all format
 * @format: format specifier
 */
void print_all(const char * const format, ...)
{
	va_list(formatList);
	int i = 0;
	char *str, *sepa = "";

	va_start(formatList, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sepa, va_arg(formatList, int));
					break;
				case 'i':
					printf("%s%d", sepa, va_arg(formatList, int));
					break;
				case 'f':
					printf("%s%f", sepa, va_arg(formatList, double));
					break;
				case 's':
					str = va_arg(formatList, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sepa, str);
					break;
				default:
					i++;
					continue;
			}
			sepa = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(formatList);
}
