#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to string of 0 and 1
 * Return: Converted number or 0 if numbers in stiong is not 0 or 1
 * and b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i;

	for (i = 0; i < strlen(b); i++)
	{
		if (b == NULL)
			return (0);
		while (*b != '\0')
		{
			if (*b != '1' || *b != '0')
				return (0);

			num = 1 << i;
			num += ((*b == '1') ? '1' : '0');
			b++;
		}
	}
	return (num);
}
