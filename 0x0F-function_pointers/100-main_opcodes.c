#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: zero, if code was success
 */
int main(int argc, char *argv[])
{
	int size, j;

	unsigned char *fn_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	fn_ptr = (unsigned char *)main;
	j = 0;

	for (; j < size; j++)
	{
		if (j < (size - 1))
		{
			printf("%02hhx ", fn_ptr[j]);
		}
		printf("%02hhx\n", fn_ptr[j]);
	}
	return (0);
}

