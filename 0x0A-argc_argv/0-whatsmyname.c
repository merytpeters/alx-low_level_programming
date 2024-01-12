#include "main.h"
#include <stdio.h>

/**
 * main - Prints its name
 * @argc: Argument count
 * @argv: Arrays of strings
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
