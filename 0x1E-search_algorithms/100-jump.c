#include <stddef.h>
#include <stdio.h>
#include <math.h>

/**
* jump_search - Jump Search function
* @array: Pointer to the first element of the array, (the array)
* @size: Number of elements in the array
* @value: Element being searched for
*
*Return: The first index where value is located, -1 if NULL
*/

int jump_search(int *array, size_t size, int value)
{
	unsigned int i, start, end;

	if (array == NULL || size == 0)
		return (-1);

	start = 0;
	end = sqrt(size);
	/* perform the jump search */
	while (array[end] <= value && end < size)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		start = end;
		end += sqrt(size);
		if (end > size - 1)
			end = size;
	}
	printf("Value found between indexes [%u] and [%u]\n", start, end);

	/* perform the linear search within the block */
	for (i = start; i < end; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
