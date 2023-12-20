#include "main.h"

/**
 * _abs - prints absolute value of an integer
 * @num: Any integer
 * Return: Absolute value
 */
int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num * 1);
	_putchar('\n');
}
