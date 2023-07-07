#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination storing the string copy
 * @src: source string
 * @n: number of bytes to copied from src.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
