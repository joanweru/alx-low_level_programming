#include <stdio.h>

/**
 * main - computes and prints the sum of all the
 * multiples of 3 or 5 below 1024
 * Return: always zero if code was success
 */
int main(void)
{
	int z, sum = 0;

	for (z = 0; z < 1024; z++)
	{
		if ((z % 3) == 0 || (z % 5) == 0)
			sum += z;
	}

	printf("%d\n", sum);

	return (0);
}
