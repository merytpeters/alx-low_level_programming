#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the character
 * @c: Character searched for
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int b;

	b = 0;
	while (s[b] != '\0')
	{
		if (s[b] == c)
		{
			return (s + b);
		}
		b++;
	}
	return (0);
}
