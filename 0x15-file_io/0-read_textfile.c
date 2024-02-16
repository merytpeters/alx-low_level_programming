#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads and prints to POSIX stdout
 * @filename: File to be read
 * @letters: Number of chars
 * Return: Text and number of text (success), 0 (failure)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int Rq;
	char *fbuff;
	ssize_t rvar, wvar;

	if (!filename)
		return (0);

	Rq = open("filename", O_RDONLY);

	if (filename == NULL)
		return (0);

	fbuff = malloc(sizeof(char *) * letters);
	if (!fbuff)
		return (0);
	rvar = read(Rq, fbuff, letters);
	wvar = write(STDOUT_FILENO, fbuff, rvar);

	close(Rq);

	free(fbuff);
	return (wvar);
}
