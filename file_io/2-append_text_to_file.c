/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 * append_text_to_file - Appends text content to an existing file.
 * @filename: Name of the file to which text will be appended.
 * @text_content: Text content to be appended to the file.
 *
 * Return:
 * On success, the function returns 1. On failure, it returns -1, and the file
 * may not be opened, written to, or closed properly.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, count);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
