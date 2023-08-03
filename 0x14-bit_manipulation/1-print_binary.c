#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: input decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned int mark = 0;
	int flip;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (mark = n, flip = 0; (mark >>= 1) > 0; flip++)
	;

	for (; flip >= 0; flip--)
	{
		if ((n >> flip) & 1)
			_putchar('1');
		else 
			_putchar('0');
	}

}
