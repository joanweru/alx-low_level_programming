#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: counts number of arguments
 * @argv: an array of strings whose elements are the arguments
 * of the program
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
