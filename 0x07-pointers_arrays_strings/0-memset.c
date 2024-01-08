#include "main.h"

/**
 * _memset - Fills memory
 * @s: Pointer to the memory block to be filled
 * @b: The value to be set
 * @n: Bytes of the memory area
 * Return: s, pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
