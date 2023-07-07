#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: counts number of arguments
 * @argv: an array of strings whose elements are the arguments
 * of the program
 * Return: 0 if success, 1 if If one of the number contains
 * symbols that are not digits
 */
int main(int argc, char **argv)
{
	int n, add, i;

	add = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[argc]);
		add += n;
	}
	printf("%d\n", add);
	return (0);
}
