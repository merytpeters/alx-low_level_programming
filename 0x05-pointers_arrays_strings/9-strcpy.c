#include "main.h"

/**
 * char *_strcpy - Copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int d = 0;
	int x = 0;

	while (*(src + d) != '\0')
	{
		d++;
	}
	for ( ; x < d ; x++)
	{
		dest[x] = src[x];
	}
	dest[d] = '\0';
	return (dest);
}
