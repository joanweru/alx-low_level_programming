#include "main.h"

/**
 * append_text_to_file - ppends text at the end of a file.
 * @filename: pointer to name of the file to open and append in
 * @text_content:  NULL terminated string to add to the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, size = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, size);

	if (op == -1)
		return (-1);

	if (wr == -1)
		return (-1);

	close(op);

	return (1);
}
