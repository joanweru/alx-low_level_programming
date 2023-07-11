#include "main.h"
#include <stdlib.h>

/**
 * no_words - counts no. of words in input sring
 * @c: string to count words of
 * Return: no of words in string
 *zzzzzz
 */
int no_words(char *c)
{
	int i, j, count;

	i = 0;
	count = 0;
	j = 0; /*ooookkkkkaayy*/

	for (; c[j] != '0'; j++)
	{
		if (c[j] == ' ')
			i =  0;
		else if (i == 0)
		{
			i = 1;
			count++;
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
	char **array, *t;
	int a, b = 0, size = 0, wrds, s = 0, begin, finish;

	while (*(str + size))
		size++;
	wrds = no_words(str);/*ilooooooveliiiife*/
	if (wrds == 0)
		return (NULL);

	array = (char **) malloc(sizeof(char *) * (wrds + 1));
	if (array == NULL)
		return (NULL);

	a = 0;
	for (; a <= size; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (s)/*moooooon*/
			{
				finish = a;
				t = (char *) malloc(sizeof(char) * (s + 1));
				if (t == NULL)
					return (NULL);
				while (begin < finish)
					*t++ = str[begin++];
				*t = '\0';
				array[b++] = t - s;
				s = 0;

			}
		}
		else if (s++ == 0)
			begin = a;
	}

	array[b] = NULL;

	return (array);
}

