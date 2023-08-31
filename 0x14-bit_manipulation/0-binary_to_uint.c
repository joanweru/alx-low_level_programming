#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b:  pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there
 * is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int size;
	unsigned int n = 0, prod = 1;

	if (!b)
		return (0);

	for (size = 0; b[size]; size++) /*riiight*/
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);/*siiiize*/
	}

	for (prod = 1, n = 0, size--; size >= 0; size--, prod *= 2)
	{
		if (b[size] == '1')
			n += prod;
	}

	return (n);
}

