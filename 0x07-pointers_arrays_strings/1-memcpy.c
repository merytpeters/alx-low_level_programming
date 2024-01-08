#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Pointer that copies to
 * @src: Pointer that copies from
 * @n: Number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
