#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Function that allocates memory
 * @b: Number of bytes to allocate
 * Return: A pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *adt;

	adt = malloc(b);

	if (adt == NULL)
	{
		exit(98);
	}
	return (adt);
}
