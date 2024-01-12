#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Argument count
 * @argv: Array of strings
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int mul, num, num1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	num1 = atoi(argv[2]);
	mul = num * num1;

	printf("%d\n", mul);
	return (0);
}
