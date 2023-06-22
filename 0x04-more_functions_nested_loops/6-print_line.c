#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: no of times the character _ should be printed
 */
void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}

	_putchar('\n');
}
