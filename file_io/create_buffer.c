#include "main.h"

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
