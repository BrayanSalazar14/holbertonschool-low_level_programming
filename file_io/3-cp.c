/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates a buffer for file operations.
 * @file: Name of the file for which the buffer is created.
 *
 * Return:
 * On success, returns a pointer to the allocated buffer.
 * On failure, prints an error message to STDERR and exits with status 99.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: File descriptor to be closed.
 *
 * Return:
 * This function has no return value.
 * On failure, prints an error message to STDERR and exits with status 100.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point for the cp (copy) program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return:
 * Returns 0 on successful execution.
 * On failure, prints an error message to STDERR and exits with a
 *specific status:
 *  - 97: Incorrect number of arguments.
 *  - 98: Unable to read from the source file.
 *  - 99: Unable to write to the destination file.
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
