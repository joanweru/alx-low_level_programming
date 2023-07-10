#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns of the array
 * @height: number of rows of the array
 * Return: a pointer to a 2 dimensional array of integers.
 * NULL on failure & If width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int z1 = 0, z2 = 0;

	if (height <= 0 || width <= 0)
		return (NULL);

	matrix = (int **)malloc(sizeof(int *) * height);

	if (matrix == NULL) /*coffeeeee*/
		return (NULL);

	for (; z1 < height; z1++)/*jjjjjkkkk*/
	{
		matrix[z1] = (int *)malloc(sizeof(int) * width);
		if (matrix[z1] == NULL)
		{
			free(matrix);/*zzzzzz*/
			for (z2 = 0; z2 < height; z2++)
				free(matrix[z2]);
			return (NULL);
		}
	}

	for (; z1 < height; z2++)
	{
		while (z2 < width)
		{
			matrix[z1][z2] = 0;
			z2++;
		}
	}

	return (matrix);
}
