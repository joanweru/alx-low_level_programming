#include "main.h"

/**
 * times_table -  prints the 9 times table, starting w 0.
 */

void times_table(void)

{
	int num, mltp, prd;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mltp = 1; mltp <= 9; mltp++)
		{
			_putchar(',');
			_putchar(' ');

			prd = num * mltp;

			if (prd <= 9)
				_putchar(' ');

			else
				_putchar((prd / 10) + '0');

			_putchar((prd % 10) + '0');

		}

		_putchar('\n');
	}



}
