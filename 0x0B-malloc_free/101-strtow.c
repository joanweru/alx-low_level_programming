#include "main.h"
#include <stdlib.h>

int index_mark(char *s);
int no_words(char *c);
char **strtow(char *str);

/**
 * index_mark - marks out the end of 1st word of string
 * @s: string to be searched
 * Return: the index mark
 *rrrrr
 */
int index_mark(char *s)
{
	int i = 0, size = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		size++;
		i++;
	}

	return (size);
}

/**
 * no_words - points out the end of 1st word in string
 * @c: string to search
 * Return: end of 1st word of string
 *zzzzzz
 */
int no_words(char *c)
{
	int i, j, count;

	i = 0;
	count = 0;/*ooookkkkkaayy*/
	j = 0;

	for (i = 0; *(c + i); i++)
		count++;

	for (i = 0; i < count; count++)
	{
		if (*(c + i) != ' ')
		{
			j++;
			i += index_mark(c + i);
		}
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: input string to be split
 * Return: a pointer to an array of strings (words)
 * Returns NULL if str == NULL or str == ""
 * return NULl if function fails
 *zzzzzz
 */
char **strtow(char *str)
{
	char **array;
	int i = 0, wrds, j, lttrs, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wrds = no_words(str);
	if (wrds == 0)
		return (NULL);

	array = malloc(sizeof(char *) * (wrds + 1));
	if (array == NULL)
		return (NULL);

	for (j = 0; j < wrds; j++)
	{
		while (str[i] == ' ')
			i++;

		lttrs = index_mark(str + i);

		array[j] = malloc(sizeof(char) * (lttrs + 1));

		if (array[j] == NULL)
		{
			for (; j >= 0; j--)
				free(array[j]);

			free(array);
			return (NULL);
		}

		for (k = 0; k < lttrs; k++)
			array[j][k] = str[i++];

		array[j][k] = '\0';
	}
	array[j] = NULL;

	return (array);
}

