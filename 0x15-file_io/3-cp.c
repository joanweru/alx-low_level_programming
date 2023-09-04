#include "main.h"

char *create_temp(char *input_file);
void clse_fl(int input_file);

/**
 * main - Copies elements of a file into other file
 * @argc: no arguments passed to program.
 * @argv: array of pointers to the arguments
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *temp;
	int old, new, rd, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	temp = create_temp(argv[2]);
	old = open(argv[1], O_RDONLY);
	rd = read(old, temp, 1024);
	new = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (old == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(temp);
			exit(98);/*yooo*/
		}

		wr = write(new, temp, rd);
		if (new == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(temp);/*cap sun*/
			exit(99);
		} /*bloooow it*/

		rd = read(old, temp, 1024);
		new = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(temp);/*joans work*/
	clse_fl(old);
	clse_fl(new);

	return (0);
}

/**
 * create_temp - Allocates 1024 bytes for a buffer
 * @input_file: pointer to name of file that buffer is storing chars for
 * Return: pointer newly-allocated buffer
 */

char *create_temp(char *input_file)
{
	char *temp;/*siiiike*/

	temp = malloc(sizeof(char) * 1024);

	if (!temp)/*beeest*/
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", input_file);
		exit(99);
	}
	return (temp);
}

/**
 * clse_fl - closes the file descriptors
 * @input_file: file descriptor that'll be closed
 */
void clse_fl(int input_file)
{
	int desc;

	desc = close(input_file);

	if (desc == -1)/*aaaaa*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input_file);
		exit(100);
	}


}
