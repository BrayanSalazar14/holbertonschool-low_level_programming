/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: Name of the file to be created.
 * @text_content: Text content to be written to the file.
 *
 * Return:
 * On success, the function returns 1. On failure, it returns -1, and the
 * file may not be created or written to properly.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, count);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
