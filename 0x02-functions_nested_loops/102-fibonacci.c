#include <stdio.h>

/**
* main - Prints the first 50 fibonacci numbers
*
* Return: 0 on success
*/
int main(void)
{
	unsigned int next = 0, prev, firstNum = 0;
	int num;
	
	prev = 1;
	while (num < 50)
	{
		next = firstNum + prev;
		firstNum = prev;
		prev = next;
		num++;
		if (num < 50)
			printf("%u, ", next);
		else if (num == 50)
			printf("%u\n", next);
	}
	return (0);
}
