#include "main.h"

/**
 * _memset - fills memory with constant bytes
 * @s: location to be filled
 * @n: no of bytes to be filled
 * @b: char to fill memory area with
 * Return:  pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
