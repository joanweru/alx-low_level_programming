#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: input number to get bit from
 * @index: index, starting from 0 of the bit you want to get
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;
	unsigned long int output;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit = 1 << index;/*can i*/

	ouput = n & bit;/*giiirl*/

	if (output == bit)

	if ((n & bit))
		return (1);

	return (0);
}
