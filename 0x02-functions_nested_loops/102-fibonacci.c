#include <stdio.h>

/**
* main - Prints the first 50 fibonacci numbers
*
* Return: 0 on success
*/
int main(void)
{
	unsigned long next = 0, prev, firstNum = 0;
	int num;

	prev = 1;
	while (num <= 50)
	{
		next = firstNum + prev;
		firstNum = prev;
		prev = next;
		num++;
		if (num < 50)
			printf("%ld, ", next);
		else if (num == 50)
			printf("%ld\n", next);
	}
	return (0);
}
