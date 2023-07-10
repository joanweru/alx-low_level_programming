#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates an array of chars,
  * & initializes it with a specific char
  * @size: size of array to be created
  * @c: char to intialize the array
  * Return: NULL if size = 0 & a pointer to the array, or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *q;
	unsigned int z = 0;

	q = malloc(size * sizeof(char));

	if (q == NULL) /*qqq*/
		return (NULL);

	if (size == 0) /*rrrrr */
		return (NULL);

	for (; z < size; z++)
	{
		q[z] = c;
	}
	return (q);

}
