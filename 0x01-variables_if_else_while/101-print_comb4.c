#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: always 0 if code was a success
 */
int main(void)

{
	int digitz_1, digitz_2, digitz_3;

	for (digitz_1 = 48; digitz_1 < 58; digitz_1++)
	{
		for (digitz_2 = 49; digitz_2 < 58; digitz_2++)
		{
			for (digitz_3 = 50; digitz_3 < 58; digitz_3++)
				if (digitz_3 > digitz_2 && digitz_2 > digitz_1)
				{
					putchar(digitz_1);
					putchar(digitz_2);
					putchar(digitz_3);
					if (digitz_1 != 55 || digitz_2 != 56)
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

