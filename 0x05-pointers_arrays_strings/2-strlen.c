#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: wrd
 */
int _strlen(char *s)
{
	int wrd = 0;

	while (*s != '\0')
	{
		wrd++;
		s++;
	}
	return (wrd);
}
