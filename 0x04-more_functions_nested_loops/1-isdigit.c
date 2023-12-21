#include "main.h"

/**
 * _isdigit - Checks for digits
 * @c: Is a digit
 * Return: 1 if c is a number, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
