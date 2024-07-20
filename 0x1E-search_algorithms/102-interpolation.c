#include <stddef.h>
#include <stdio.h>

/**
* interpolation_search - Interpolation Search function
* @array: Pointer to the first element of the array, (the array)
* @size: Number of elements in the array
* @value: The index of the element being searched for
*
*Return: The first index where value is located, -1 if NULL
*/

int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos = 0;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		size_t pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
	}

	if (value >= array[high])
		pos = size + 1;
	else if (value <= array[low])
		pos = 0;

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
