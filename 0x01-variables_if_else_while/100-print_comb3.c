#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: 0 if code was sucess
 */
int main(void)
{
	int digitz_1, digitz_2;

	for (digitz_1 = 0; digitz_1 < 9; digitz_1++)
	{
		for (digitz_2 = digitz_1 + 1; digitz_2 < 10; digitz_2++)
		{
			putchar((digitz_1 % 10) + '0');
			putchar((digitz_2 % 10) + '0');

			if (digitz_1 == 8 && digitz_2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
