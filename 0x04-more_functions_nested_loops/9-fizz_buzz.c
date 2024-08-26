#include <stdio.h>

/**
 * main - Prints Fizz, FizzBuzz and Buzz at certain multiples
 *
 * Return: 0 on success, 1 on erro
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			if (num != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
			printf("%d ", num);
		num++;
	}
	printf("\n");
	return (0);
}
