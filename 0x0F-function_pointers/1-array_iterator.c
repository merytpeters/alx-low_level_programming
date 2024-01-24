#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Executes a function that prints each
 * elem of an array
 * @array: Array
 * @size: Elements of the array
 * @action: Function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(action(array[i]));
	}
}
