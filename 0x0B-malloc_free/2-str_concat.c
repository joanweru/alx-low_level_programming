#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: pointer to a newly allocated space in memory
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int z1 = 0, z2 = 0, long1 = 0, long2 = 0;
	char *p;

	if (s1 != NULL)
	{
		while (s1[long1])
			long1++;
	}

	if (s2 != NULL)
	{
		while (s2[long2])
			long2++;
	}

	p = malloc(sizeof(char) * (long1 + long2 + 1));

	if (p == NULL)
		return (NULL);

	for (; z1 < long1; z1++)
	{
		p[z1] = s1[z1];
	}

	for (; z2 < long2; z2++)
	{
		p[z1 + z2] = s2[z2];
	}

	p[z1 + z2] = '\0';

	return (p);
}
