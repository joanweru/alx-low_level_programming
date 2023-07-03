#include "main.h"
/**
 * _memcpy - function copies n bytes from memory
 * area src to memory area dest
 * @src: memory area destination to copy from
 * @dest: memory area destination to copy to
 * @n: no of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
