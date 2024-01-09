#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches for a string for any set of bytes
 * @s: Pointer pointer
 * @accept: Pointer
 * Return: Null
 */
char *_strpbrk(char *s, char *accept)
{
	int l, lt;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (lt = 0; accept[lt] != '\0'; lt++)
		{
			if (s[l] == accept[lt])
			{
				return (s + l);
			}
		}
	}
	return (NULL);
}
