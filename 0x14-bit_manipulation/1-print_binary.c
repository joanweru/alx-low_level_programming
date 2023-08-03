#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: input decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned int mark = 0;
	unsigned int num = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (num)
	{
		if (mark == 1 && (n & num) == 0)
			_putchar('0');/*hooome*/

		else if ((n & num) != 0)
		{
			
			_putchar('1');
			mark = 1;
		}
		num >>= 1; /*meditate*/
	}

}
