#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: Text file being read
 * @letters: Number of letter to be read
 * Return: Returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	t = read(f, b, letters);
	w = write(STDOUT_FILENO, b, t);

	free(b);
	close(f);
	return (w);
}
