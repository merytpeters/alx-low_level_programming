#include <stddef.h>
#include <stdio.h>

/**
* print_arr - Prints the current array
* @array: Array to print
* @lowest: Lowest element in the array
* @highest: Highest element in the array
*/
void print_arr(int *array, unsigned int lowest, unsigned int highest)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = lowest; i <= highest; i++)
	{
		printf("%u", array[i]);
		if (i < highest)
			printf(", ");
	}
	printf("\n");
}

/**
* binary_search - Binary Search function
* @array: Pointer to the first element of the array, (the array)
* @size: Number of elements in the array
* @value: Element being searched for
*
*Return: The index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	unsigned int lowest = 0, mid;
	unsigned int highest = size - 1;

	if (array == NULL)
		return (-1);

	print_arr(array, lowest, highest);

	if ((unsigned int)array[0] == highest)
		highest = lowest;

	while (lowest < highest)
	{
		mid = (lowest + highest) / 2;
		if (array[mid] < value)
			lowest = mid + 1;
		else if (array[mid] > value)
			highest = mid - 1;
		else
			return (mid);

		print_arr(array, lowest, highest);
	}
	return (-1);
}
