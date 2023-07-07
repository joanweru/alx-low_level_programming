#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 * @argc: counts number of arguments
 * @argv: an array of strings whose elements are the arguments
 * of the program
 * Return: 0 if program is able to receive two arguments
 * 1, if the program does not receive two arguments,
 */
int main(int argc, char **argv)
{
	int n1, n2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		product = n1 * n2;
	}

	printf("%d\n", product);

	return (0);
}

