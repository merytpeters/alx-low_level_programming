#include "main.h"
#include <stdio.h>

/**
 * main - Prints number of arguments passed into it
 * @argc: Argument count
 * @argv: Array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore*/
	printf("%d\n", argc -1);
	return (0);
}
