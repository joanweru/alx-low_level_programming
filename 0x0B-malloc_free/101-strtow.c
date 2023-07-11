#include "main.h"
#include <stdlib.h>

void fetch(char **wrds, char *str);
void make_words(char **wrds, char *str, int begin, int stop, int id);

/**
 * make_words- makes a word and puts it into the array
 * @wrds: matrix of strings
 * @str: input string
 * @begin: begining of word
 * @stop: end of word
 * @id: id of array
 */

void make_words(char **wrds, char *str, int begin, int stop, int id)
{
	int a, b; /*yyyyyuuuuup*/

	a = stop - begin;
	wrds[id] = (char *)malloc(sizeof(char) * (a + 1));

	for (b = 0; begin < stop; begin++, b++)
		wrds[id][b] = str[begin];
	wrds[id][b] = '\0';
}



/**
  * fetch - fetches words to an array
  * @wrds: array of strings
  * @str: input string
  */
void fetch(char **wrds, char *str)
{
	int a = 0, b = 0, begin, stop = 0;

	while (str[a]) /*mooooooneeeeyyy*/
	{
		if (stop == 0 && str[a] != ' ')
		{
			begin = a;
			stop = 1;
		}

		if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
		{
			make_words(wrds, str, begin, a, b);
			b++;
			stop = 0;
		}

		a++;
	}

	if (stop == 1)
		make_words(wrds, str, begin, a, b);

}

/**
 * strtow - splits a string into words.
 * @str: input string to be split
 * Return: returns a pointer to an array of strings (words)
 * NULL if str == NULL or str == "" & if funcion fails
 */

char **strtow(char *str)
{
	int a, f, l;
	char **wrds;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	a = f = l = 0;
	while (str[a])
	{
		if (f == 0 && str[a] != ' ')
			f = 1;
		if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
		{
			f = 0;
			l++;
		}
		a++; /*liiiisttteeeen*/
	}

	l += f == 1 ? 1 : 0;
	if (l == 0)
		return (NULL);

	wrds = (char **)malloc(sizeof(char *) * (l + 1));
	if (wrds == NULL)
		return (NULL);

	fetch(wrds, str);
	wrds[l] = NULL;
	return (wrds);
}
