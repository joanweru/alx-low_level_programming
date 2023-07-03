#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function locates the first occurrence in the strin
 * s of any of the bytes in the string accept
 * @s: string whose 1st occurence is to be located
 * @accept: string with the bytes to search for
 * Return: pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *begin = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = begin;
		s++;
	}
	return (NULL);
}
