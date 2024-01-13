#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Array of strings
 * Return: 0 (Success), 1 (if not digit)
 */
int main(int argc, char *argv[])
{
	unsigned int num;
	int ct, sum = 0;
/*if no numbers*/
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	/*if numbers contain a symbol*/
	for (ct = 1; ct < argc; ct++)
	{
		for (num = 0; argv[ct][num] != '\0'; num++)
		{
			if (!(isdigit(argv[ct][num])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[ct]);
	}
	printf("%d\n", sum);
	return (0);
}
