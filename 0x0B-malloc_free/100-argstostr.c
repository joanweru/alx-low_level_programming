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
	int a, b, id, tot_len = 0;
	char *output, *c;

	if (ac == 0 || av == NULL)
		return (NULL);

	a = 0;
	for (; a < ac; a++)
	{
		c = av[a];
		b = 0;

		while (c[b++])
			tot_len++; /*aweeesooome*/

		tot_len++; /*rrriiiiight*/
	}

	output = (char *)malloc((sizeof(char) * tot_len + 1));
	if (output == NULL)
		return (NULL);

	for (a = 0, b = 0; a < ac && b < tot_len; a++)
	{
		c = av[a]; /*zzzzzzzz*/
		id = 0;

		while (c[id])
		{
			output[b++] = c[id++];
		}

		output[b++] = '\n';

	}
	output[b] = '\0';

	return (output);
}
