#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: input string to be duplicated
 * Return: NULL if str = NULL. On success,
 * a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int z = 0, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length])
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	do {
		duplicate[z] = str[z];
		z++;
	} while (duplicate[z - 1] != '\0');

	return (duplicate);
}
