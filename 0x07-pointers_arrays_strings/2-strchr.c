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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
