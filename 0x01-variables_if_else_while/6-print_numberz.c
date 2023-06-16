#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by a new line.
 * Return: always return 0 if code was successful
 */
int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
		putchar((digits % 10) + '0');

	putchar('\n');

	return (0);
}
