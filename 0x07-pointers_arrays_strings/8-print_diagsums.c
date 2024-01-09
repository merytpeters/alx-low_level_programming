#include "main.h"

/**
 * print_diagsums - Prints the sum of two diagonals of a matrix
 * @size: Size of matrix
 * @a: Function parameter
 */
void print_diagsums(int *a, int size)
{
	int c1;
	int c2;
	int x;

	c1 = 0;
	c2 = 0;

	for (x = 0; x < size; x++)
	{
		c1 = c1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		c2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", c1, c2);
}
