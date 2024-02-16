#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of file
 * @text_content: Pointer to string
 * Return: 1 (success), -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int wc;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

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
	close(fd);
	return (1);
}
