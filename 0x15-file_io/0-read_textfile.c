#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to the name of the file.
 * @letters: no of letters to read and print
 * Return:  actual number of letters it could read and print
 * 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *var;
	int op, rd, wr;

	if (!filename)
		return (0);

	var = malloc(sizeof(char) * letters);

	if (!var)/*oook*/
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, var, letters);
	wr = write(STDOUT_FILENO, var, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(var);
		return (0);/*riiiight*/
	}

	free(var);/*case closed*/
	close(op);

	return (wr);


}
