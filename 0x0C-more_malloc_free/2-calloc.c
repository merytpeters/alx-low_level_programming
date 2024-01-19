#include "main.h"

/**
 * _calloc - Allocates memory for an array and initialize it to zero
 * @nmemb: Number of elements
 * @size: Size of each elements in the array
 * Return: Pointer to the allocated memory or NULL (failure)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int total_size;
	void *_allmem;

	total_size = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);

	_allmem = malloc(total_size);
	if (_allmem == NULL)
		return (NULL);
	return (_allmem);
}
