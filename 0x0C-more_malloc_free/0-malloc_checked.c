#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Function that allocates memory
 * @b: Number of bytes to allocate
 * Return: A pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(ptr) * b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
