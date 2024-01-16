#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Duplicates string to a new memory location
 * @str: Character
 * Return: Pointer to a duplicate, else NULL
 */
char *_strdup(char *str)
{
	char *newstr;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	newstr = malloc(sizeof(char) * (i + 1));

	if (newstr == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		newstr[j] = str[j];

	return (newstr);
}
