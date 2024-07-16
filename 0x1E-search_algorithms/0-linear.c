#include <stddef.h>

/**
* linear_search - Linear Search function
* @array: Pointer to the first element of the array, (the array)
* @size: Number of elements in the array
* @value: Element being searched for
*
*Return: The first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
