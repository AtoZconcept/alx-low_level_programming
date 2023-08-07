#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: The name of the file buffer is storung chars for.
 *
 * Return: A pointer to the newly alocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't writr to %s\n", file);
			exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptors
 * @f: The file descriptor to be closed
 */

void close_file(int f)
{
	int a;

	a = close(f);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close f %d\n", f);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another
 * @argc: Number of arguments supplied to program
 * @argv: Aarray of pointer to arguments
 * Return: Return 0 on success.
 */

int main(int argc, char *argv[])
{
	int fr, t, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_fr file_t\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	r = read(fr, buffer, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fr == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(t, buffer, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[2]);
                        free(buffer);
                        exit(99);
		}
		r = read(fr, buffer, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(fr);
	close_file(t);
	return (0);
}
