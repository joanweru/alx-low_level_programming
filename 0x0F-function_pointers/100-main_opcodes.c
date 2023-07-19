#include <stdio.h>
#include <stdlib.h>

void ptr_opc(char *fn_ptr, int size);

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: zero, if code was success
 */
int main(int argc, char *argv[])
{
	int size;

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

	ptr_opc((char *)&main, size);
	return (0);
}

/**
  * ptr_opc - helper fn to print opcodes
  * @fn_ptr: memory address of function 'main'
  * @size: no. of bytes to print
 */
void ptr_opc(char *fn_ptr, int size)
{
	int j = 0;

	for (; j < size; j++)
	{
		printf("%.2hhx", fn_ptr[j]);
		if  (j < size - 1)
			printf(" ");
	}

	printf("\n");
}

