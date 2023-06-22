#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line.
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number != 2 && number != 4)
		{
			_putchar(number + '0');
		}
	}

	_putchar('\n');
}
