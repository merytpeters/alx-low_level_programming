#include "main.h"

/**
 * _islower - Checks for lowercase alphabets
 * @c: character
 * Return: 1 if it is lowercase, if not 0
 */
int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
