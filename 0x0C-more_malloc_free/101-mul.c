#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers.
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: void
 */
int main(int argc, char **argv)
{
	int i, j, product;

	if (argc != 3) /*if arg is not correct*/
	{
		printf("Error\n");
		exit(98);/*exxiiiiiiit*/
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		product = i * j;
		printf("%d\n", product);
		return (0);
	}
}

