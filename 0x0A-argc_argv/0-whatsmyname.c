#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: counts number of arguments
 * @argv: an array of strings whose elements are the arguments
 * of the program
 * Return: 0 if sucess
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}

