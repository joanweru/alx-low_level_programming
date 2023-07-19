#include "function_pointers.h"

/**
 * int_index -  searches for an integer
 * @array: pointer to array to search integer in
 * @size: size of array
 * @cmp: pointer to comparing fn
 * Return: returns the index of the first element for
 * which the cmp function does not return 0
 * If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (cmp != NULL && array != NULL)
		{
			while (i < size)
			{
			if (cmp(array[i]) != 0)
				return (i);

			i++;
			}
		}
	}

	return (-1);
}

