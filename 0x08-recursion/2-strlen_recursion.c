#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: String
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int lgth = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else if (*s > 1)
	{
		lgth++;
		lgth += _strlen_recursion(s + 1);
	}
	return (lgth);
}
