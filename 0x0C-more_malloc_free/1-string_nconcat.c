#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to first string to join
 * @s2: pointer to second string to join
 * @n: no. of strings to join
 * Return: pointer that points to a newly allocated space
 * in memory, which contains s1, followed by the first n
 * bytes of s2, and null terminated. NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *join;

	a = 0;
	b = 0;
	c = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[b])
		b++;

	if (s2 == NULL)
		s2 = "";

	while (s2[c])
		c++;

	if (n >= c)
		n = c;

	join = malloc(b + n + 1);
	if (join == NULL)
		return (NULL);

	for (; a < (b + n); a++)
	{
		if (a < b)
			join[a] = *s1, s1++;

		else
			join[a] = *s2, s2++;
	}
	join[a] = '\0';
	return (join);
}
