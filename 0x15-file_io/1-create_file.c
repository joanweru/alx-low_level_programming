#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to name of file to create
 * @text_content: pointer to NULL terminated string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, size = 0;

	if (!filename)
		return (-1);

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	wr = write(op, text_content, size);

	if (op < 0)
		return (-1);

	while (text_content && *(text_content + size))
		size++;

	close(op);

	if (wr < 0)
		return (-1);

	return (1);
}
