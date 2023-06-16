#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: always 0 if cod was success
 */
int main(void)
{
	int digitz;

		for (digitz = 0; digitz <= 9; digitz++)
		{
			putchar((digitz % 10) + '0');
			if (digitz == 9)
				continue;

			putchar(',');
			putchar(' ');
		}

	putchar('\n');

	return (0);
}
