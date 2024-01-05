#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: Copy to
 * @src: Copy from
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int d;
	int s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
