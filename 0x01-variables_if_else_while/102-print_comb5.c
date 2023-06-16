#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: always 0 if code was success
 */
int main(void)
{
	int digitz1, digitz2;

	for (digitz1 = 0; digitz1 < 100; digitz1++)
	{
		for (digitz2 = 0; digitz2 < 100; digitz2++)
		{
			if (digitz1 < digitz2)
			{
				putchar((digitz1 / 10) + 48);
				putchar((digitz1 % 10) + 48);
				putchar(' ');
				putchar((digitz2 / 10) + 48);
				putchar((digitz2 % 10) + 48);
				if (digitz1 != 98 || digitz2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
	}
}
