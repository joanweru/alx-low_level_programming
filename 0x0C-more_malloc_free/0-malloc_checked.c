#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b); /*raaaaandom*/

	if (m == NULL)
		exit(98);/*agfjggndk*/

	return (m);
}
