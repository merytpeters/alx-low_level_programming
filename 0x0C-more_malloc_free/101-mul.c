#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - Multiply two positive numbers
 * @num1: First positive integer
 * @num2: Second positive integer
 * Return: Mul (Success)
 */
int _isdigit(int num1, int num2)
{
	int mul;

	mul = num1 * num2;
	return (mul);
}


/**
 * main - Checks the arguments
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int mul = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s1 = argv[1], s2 = argv[2];
	if (!isdigit(s1) || !isdigit(s2))
	{
		printf("Error\n");
		exit(98);
	}
	return (mul);
	_putchar('\n');
	return (0);
}
