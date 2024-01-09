#include "main.h"

/**
 *  _strspn - Gets the length of a prefix substring
 *  @s: Pointer to string to be examined
 *  @accept: Pointer to string to be matched
 *  Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int _strspn(char *s, char *accept);
	unsigned int lth = 0;
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
			{
				lth++;
				break;
			}
			else if (accept[l + 1] == '\0')
			{
				return (lth);
			}
		}
		s++;
	}
	return (lth);
}
