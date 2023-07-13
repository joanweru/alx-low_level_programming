#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: total number of memory spaces
 * @size: size in bytes of each memory space
 * Return: pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
	{
		unsigned int e;
		char *spc;

		if (nmemb == 0 || size == 0)
			return (NULL);

		spc = malloc(nmemb * size);
		if (spc == NULL)
			return (NULL);

		e = 0;
		for (; e < nmemb * size; e++)
			*(spc + e) = 0;

		return (spc);

	}
