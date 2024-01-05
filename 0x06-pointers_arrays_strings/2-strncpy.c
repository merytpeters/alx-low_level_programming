#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Copy to
 * @src: Copy from
 * @n: Number of character to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	s = 0;
	while (s < n && src[s] != '\0')
	{
		dest[s] = src[s];
		s++;
	}
	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}

	return (dest);
}
