#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @dest: The string to be appended upon
 * @src: source string
 * @n: number of bytes from src to be appended to dest
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
