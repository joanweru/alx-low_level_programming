#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array
 * @array: pointer to array to execute function on
 * @size: size of array
 * @action: pointer to function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j = 0;

	if (action != NULL || array != NULL)
	{
		for (; j < size; j++)
			action(array[i]);
	}
}
