#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonal
 * s of a square matrix of integers.
 * @a: the square matrix
 * @size: size of square matrix
 */
void print_diagsums(int *a, int size)
{
	int n, max = size * size, sum_1 = 0, sum_2 = 0;

	for (n = 0 ; n < max; n += size + 1)
		sum_1 += a[n];

	for (n = size - 1; n < max - 1; n += size - 1)
		sum_2 += a[n];

	printf("%d, %d\n", sum_1, sum_2);
}


