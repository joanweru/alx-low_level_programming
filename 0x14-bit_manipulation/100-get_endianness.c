#include "main.h"

/**
 * get_endianness - checks endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int j = 1;
	char *s;

	s = (char *)&j;

	return (*s);
}
