#include "main.h"

/**
 * _isalpha - Checks for both lower and uppercase alphabets
 * @c: Character
 * Return: 1 if it is a letter, lower or uppercase if not 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
