#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to string of 0 and 1
 * Return: Converted number or 0 if numbers in stiong is not 0 or 1
 * and b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	for (b = 0; b <= 1; b++)
		while (b != '\0')
		{
			if (b != 0 | b != 1)
				return (0);
			if (b < 0)
				return (0);
			else if (b == NULL)
				return (0);
			else
				return (b);
		}
	return (num);
}
