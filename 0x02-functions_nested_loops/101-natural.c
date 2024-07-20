#include <stdio.h>

/**
* main - Computes and prints multiples of 3 and 5
* @num: Number given
*
* Return: Sum
*/
int main(void)
{
	int sum = 0;
	int num = 1;

	while (num < 1024)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			sum += num;
		}
		else if (num % 3 == 0)
		{
			sum += num;
		}
		else if (num % 5 == 0)
		{
			sum += num;
		}
		num += 1;
	}
	printf("%d\n", sum);
	return (sum);
}
