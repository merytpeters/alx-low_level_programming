#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: Array
 * @size: Number of elements in the array
 * @cmp: Pointer the the function used to compare values
 * Return: index of first elem (on success), -1 (on failure)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if cmp(array[i]);
		return (i);
	}
	return (-1);
}
