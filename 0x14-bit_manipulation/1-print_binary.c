#include "main.h"
/**
 * base_power - finds the base and power
 * @base: base
 * @power: power
 * Return: value base and power
 */
unsigned long int base_power(unsigned int base, unsigned int power)
{
	unsigned long int n = 1;
	unsigned int j;

	for (j = 1; j <= power; j++)
		n *= base;
	return (n);/*heeey*/
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, output;
	char mark = 0;

	d = base_power(2, sizeof(unsigned long int) * 8 - 1);

	while (d != 0)/*deeeeev*/
	{
		output = n & d;
		if (output == d)
		{
			mark = 1;
			_putchar('1');

		}
		else if (d == 1 || mark == 1)
		{
			_putchar('0');
		}

		d >>= 1;
	}
}
