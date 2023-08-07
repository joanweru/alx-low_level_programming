#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to name of file to create
 * @text_content: pointer to NULL terminated string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, size;

	size = 0;/*ooopsie*/

	if (!filename)/*yeeeea*/
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[size];)
			size++;
	}

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	wr = write(op, text_content, size);

	if (op == -1)/*idc*/
		return (-1);

	if (wr == -1)
		return (-1);

	close(op);

	return (1);
}
