#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to bit
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	num =  0x01;

	num = ~(num << index);

	if (num == 0x00) /*heeey*/
		return (-1);/*intersting*/

	*n &= num;
	return (1);
}
