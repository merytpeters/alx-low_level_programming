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

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd)
	{
		if (fd != 0600)
			return (1);
	}
	else if (fd == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	for (i = 0; text_content[i]; i++)
	{
		if (text_content == NULL)
			return (1);
	}

	wc = write(fd, text_content, i);

	if (wc == -1)
		return (-1);
	close(fd);


	return (1);
}
