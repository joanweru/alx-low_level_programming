#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * @z: number to be tested..
 * Return: returns the value of the last digit..
 */
int print_last_digit(int z)
{
	int n;

	if (z < 0)
		n = -1 * (z % 10);
	else
		n = z % 10;

	_putchar((n % 10) + '0');

	return (n % 10);


}
