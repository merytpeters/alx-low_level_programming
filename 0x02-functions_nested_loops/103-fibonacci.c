#include <stdio.h>

/**
* main - Prints the sum of fibonacci sequence whose values doesn't
* exceed 4000000
*
* Return: 0 on success
*/
int main(void)
{
	unsigned long prev = 1, curr = 2, next;
	unsigned long sum = 0;

	while (curr <= 4000000)
	{
		if (curr % 2 == 0)
		{
			sum += curr;
		}

		next = prev + curr;
		prev = curr;
		curr = next;
	}

	printf("%lu\n", sum);
	return (0);
}
