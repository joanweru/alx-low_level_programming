#include <stdio.h>
/**
 * main - prints all single digit numbers of base 1
 * 0 starting from 0, followed by a new line.
 * Return: always returns 0 if code was sucess
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
