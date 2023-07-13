#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: lower range of the no of values in array
 * @max: upper range of no of values in array
 * Return: pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int j, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	p = malloc(sizeof(int) * range);

	if (p == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		p[j] = min++;

	return (p);
}
