#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int (*fn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fn = get_op_func(argv[2]);

	if (fn == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fn(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
