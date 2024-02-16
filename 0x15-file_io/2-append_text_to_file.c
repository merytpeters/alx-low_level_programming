#include "main.h"

/**
 * append_text_to_file - Adds text at the end of a file
 * @filename: Name of file
 * @text_content: Pointer to string
 * Return: 1 (success), -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int wc;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		{
			continue;
		}

		wc = write(fd, text_content, i);
		if (wc == -1)
			return (-1);
	}
	else
	{
		if (access(filename, F_OK) == -1)
			return (-1);
		else
			return (1);
	}

	close(fd);
	return (1);
}
