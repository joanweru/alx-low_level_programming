#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: no of bit flips needed to equal m for n
 * @m: no to flip n to
 * Return: number of bits you would need to flip to get
 * from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, num_bit;

	x = n ^ m;
	num_bit = 0;/*heeey*/

	while (x > 0)/*pooooiiint*/
	{
		num_bit += (x & 1);
		x >>= 1;
	}

	return (num_bit);
}
