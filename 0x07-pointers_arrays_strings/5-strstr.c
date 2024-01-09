#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates substring
 *  @haystack: points to substring
 *  @needle: substring
 *  Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *nd = needle;

		while (*nd != '\0' && *h == *nd)
		{
			h++;
			nd++;
		}
		if (*nd == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
