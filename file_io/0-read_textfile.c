/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: Pointer to the name of the file to be read.
 * @letters: Number of letters to read and print.
 *
 * Description: This function opens a text file, reads the specified number
 * of letters, and prints the content to the POSIX standard output.
 *
 * Return: The actual number of letters read and printed; 0 if the file
 * cannot be opened or read, filename is NULL, or write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);

	if (op == -1)
	{
		free(buffer);
		return (0);
	}

	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		close(op);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
