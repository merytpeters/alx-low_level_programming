#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creates an array of chars
 * Description: Creates an array of size size
 * @size: Size of the array
 * @c: Character array is initialized to
 * Return: Pointer to array of chars (Success), NULL if size is 0 or it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
