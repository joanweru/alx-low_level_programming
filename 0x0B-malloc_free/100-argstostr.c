#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments in the function
 * @av: array of pointers to arguments
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int a = 0;
	int b = 0;
	int id = 0;
	int tot_len = 0;
	char *output;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; a < ac; a++)
	{
		char *c = av[a];
		int arg_len = 0;

		while (c[arg_len] != '\0')
		{
			arg_len++;
		}

		tot_len += arg_len + 1;
	}

	output = (char *) malloc((tot_len + 1) * sizeof(char));

	if (output == NULL)
		return (NULL);

	for (; a < ac; a++)
	{
		char *c = av[a];

		while (c[b] != '\0')
		{
			output[id++] = c[b++];
		}

		output[id++] = '\n';
	}

	output[tot_len] = '\0';

	return (output);
}
