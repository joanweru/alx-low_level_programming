#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 * followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	unsigned long fbnc1 = 0, fbnc2 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fbnc1 + fbnc2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fbnc1 = fbnc2;
		fbnc2 = fibsum;
	}
	printf("%.0f\n", tot_sum);


	return (0);
}
