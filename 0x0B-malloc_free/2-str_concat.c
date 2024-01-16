#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Concatenates strings in new memory space
 * @s1: First string
 * @s2: Second string
 * Return: Strings (SUCCESS), NULL (Failure or empty)
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++, j++;
	}
	str[i] = '\0';
	return (str);
}
