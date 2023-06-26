#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * @n: number of elements in the array being printed
 * @a: array being printed
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == 0)
			printf("%d", a[index]);
		else
			printf(", %d", a[index]);
	}
		printf("\n");
}
