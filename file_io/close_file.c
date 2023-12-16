#include "main.h"

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
